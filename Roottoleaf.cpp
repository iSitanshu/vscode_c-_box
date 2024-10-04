/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  private:
    void solve(Node* root,vector<vector<int>>& roottoleaf,vector<int> leaf){
        if(root==NULL) return;
        
        leaf.push_back(root->data);
        if(root->left==NULL&&root->right==NULL) roottoleaf.push_back(leaf);
        
        solve(root->left,roottoleaf,leaf);
        solve(root->right,roottoleaf,leaf);
        leaf.pop_back();
    }
  public:
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> roottoleaf;
        if(root==NULL) return roottoleaf;
        vector<int> leaf;
        solve(root,roottoleaf,leaf);
        
        return roottoleaf;
    }
};