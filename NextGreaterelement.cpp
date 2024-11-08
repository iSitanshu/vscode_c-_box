class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store;
        int n = nums2.size();
        if(n<=1) return {-1};
        map<int,int> mpp;

        int maxi=nums2[n-1];
        store.push_back(-1);
        for(int i=n-2;i>=0;i--){
            if(nums2[i]<maxi){
                store.push_back(maxi);
                maxi=nums2[i];
            }else{
                store.push_back(-1);
                maxi=nums2[i];
            }
        }
        // second part to which find the element and give the next count
        vector<int> next;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;i<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    next[i]=store[n-j-1];
                }
            }
        }
        return next;
    }
};
