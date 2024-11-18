// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void print(vector<string> str){
    for(auto it:str){
        cout<<it<<" ";
    }
    cout<<endl;
}
void solve(vector<string>& val,int n,string str){
    if(n==str.length()){
        val.push_back(str);
        return;
    }
    solve(val,n,str+'0');
    if(!(str.length()>0&&str[str.length()-1]=='1')) 
    solve(val,n,str+'1');
}
int main() {
    vector<string> val;
    string str="";
    // solve(str,3,val); //function solve to calculate all the substring which will form given n=3 but the catch is no 2 consecutive digit must have 1.
    solve(val,3,str);// function to calculate all the binary string for n=3 
    print(val);
}