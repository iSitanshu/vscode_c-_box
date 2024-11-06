class Solution {
public:
    int beautySum(string s) {
        int len = s.length();
        int mini=INT_MAX;
        int maxi=0;
        int sum=0;

        for(int i=0;i<len;i++){
            vector<int> freq(26,0);
            for(int j=i;j<len;j++){ 
                freq[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        mini=min(mini,freq[k]);
                        maxi=max(maxi,freq[k]);
                    }
                }
                if(mini==INT_MAX) mini=0;

                sum+=(maxi-mini);
                maxi=0;
                mini=INT_MAX;
            }
        }
        return sum;
    }
};