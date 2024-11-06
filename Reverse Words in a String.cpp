class Solution {
public:
    string reverseWords(string s) {
        s=' '+s;
        int n=s.length();
        string str="";
        string answer="";

        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(str!=""){
                    answer+=' '+str;
                    str="";
                }
                else{
                    continue;
                }
            }
            else str=s[i]+str;
        }
        answer.erase(answer.begin());
        return answer;
    }
};