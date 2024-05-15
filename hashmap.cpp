#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string,int>m;
  pair<string,int> p=make_pair("Sitanshu",1);
  m.insert(p);
  pair<string,int>p2("Mishra",2);
  m.insert(p2);
  m["extra"]=3;
  cout<<m.at("Sitanshu")<<endl;
  return -1;
}