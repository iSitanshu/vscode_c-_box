class Solution {
private:
    int find_maxi(vector<int> nums,int i,int k){
        int maxi=nums[i];
        for(int ind=i;ind<k+i;ind++){
            maxi=max(maxi,nums[ind]);
        }
        return maxi;
    }
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxi=find_maxi(nums,0,k);
        vector<int> calculate;
        int n=nums.size();
        for(int i=0;i<n-k;i++){
            if(nums[i]==maxi){
                calculate.push_back(maxi);
                maxi=find_maxi(nums,i+1,k);
            }
            else{
                calculate.push_back(maxi);
                maxi=max(maxi,nums[i+k]);
            }
        }
        calculate.push_back(maxi);
        return calculate;
    }
};
//using stack but this approach is wrong giving TLE