class Solution {
private:
    void solve(int count,int ind,int n,int target,int sum,
    vector<int>& arr,set<vector<int>>& store,vector<int> nums){
        if(count==n){
            if(sum==target) store.insert(arr);
            return;
        }   
        if(ind>=nums.size()||sum>target) return; 
        
        arr.push_back(nums[ind]);
        solve(count+1,ind+1,n,target,sum+nums[ind],arr,store,nums);
        arr.pop_back();
        solve(count,ind+1,n,target,sum,arr,store,nums);
    }
public:
    vector<vector<int>> combinationSum3(int n, int target) {
        set<vector<int>> store;
        vector<int> arr;
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        solve(0,0,n,target,0,arr,store,nums);
        return vector<vector<int>> (store.begin(),store.end());
    }
};