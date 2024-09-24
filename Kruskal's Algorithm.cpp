//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    int findParent(vector<int>& parent,int u){
        if(parent[u]!=u){
            parent[u]=findParent(parent,parent[u]);
        }
        return parent[u];
    }
    void unionset(vector<int>& parent,vector<int>& rank,int u,int v){
        int node1=findParent(parent,u);
        int node2=findParent(parent,v);
        if(node1!=node2){
            if(rank[node1]<rank[node2]) parent[node1]=node2;
            else if(rank[node1]>rank[node2]) parent[node2]=node1;
            else{
                parent[node2]=node1;
                rank[node1]++;
            }
        }
    }
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int weight=0;
        vector<tuple<int,int,int>> edges;
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                edges.push_back({it[2],it[0],it[1]});
            }
        }
        sort(edges.begin(),edges.end());
        
        vector<int> rank(V,0);
        vector<int> parent(V);
        
        for(int i=0;i<V;i++) parent[i]=i;
        
        for(int i=0;i<V;i++){
            for(auto& [wt,u,v]: edges){
                if(findParent(parent,u)==findParent(parent,v)){
                    continue;
                }else{
                    weight+=wt;  
                    unionset(parent,rank,u,v);
                }
            }
        }
        return weight;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends