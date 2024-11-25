class Solution {
public:

   bool func(string s, map<string,int>&mpp,int index,int start, vector<vector<int>>&dp){
       
        if(index>=s.size()&&(index-start+1)==1){
            return true;
        }

        if(index>=s.size()&&(index-start+1)!=1){
            return false;
        }

        if(dp[index][start]!=-1){
            return dp[index][start];
        }
        
        bool first=false;
       
        if(mpp.find(s.substr(start,index-start+1))!=mpp.end()){  
         first= func(s,mpp,index+1,index+1,dp);
        }
       
       bool second=func(s,mpp,index+1,start,dp);
       return  dp[index][start]=(first||second);

   }

    bool wordBreak(string s, vector<string>& wordDict) {
      
       map<string,int>mpp;
       for(auto it:wordDict){
        mpp[it]++;
       }
       int index=0;
       int start=0;
       vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
       return func(s,mpp,index,start,dp);

    }
};