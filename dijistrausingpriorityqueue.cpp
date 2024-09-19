class Solution
{
    private:
    void bfs(int src,vector<pair<int,int>> adj[],int V,vector<int>& distance,
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>& pq){
        distance[src]=0;
        while(!pq.empty()){
            auto money=pq.top();
            pq.pop();
            int parent=money.second;
            int parentdist=money.first;
            for(auto end:adj[parent]){
                int it=end.first;
                int weight=end.second;
                if(distance[it]>parentdist+weight){
                    distance[it]=parentdist+weight;
                    pq.push({distance[it],it});
                }
            }
        }
    }
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> edges[], int S)
    {
        // Code here
        vector<pair<int,int>> adj[V];
        for(int i=0;i<V;i++){
            for(auto it:edges[i]){
                adj[i].push_back({it[0],it[1]});
                adj[it[0]].push_back({i,it[1]});
            }
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,S});
        vector<int> distance(V,INT_MAX);
        bfs(S,adj,V,distance,pq);
        for(int i=0;i<V;i++){
            if(distance[i]==INT_MAX) distance[i]=-1;
        }
        return distance;
    }
};