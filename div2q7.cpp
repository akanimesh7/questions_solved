#include <iostream>
using namespace std;
#include <map>
#include<string>
int main() {
int n,m;
cin>>n>>m;
map<string,string> mp;
for(int i=0;i<m;i++){
    string s1;cin>>s1;
    string s2;cin>>s2;
    mp[s1]=s2;
    
}
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int len=s.length();
    if(len<=mp[s].length()){ cout<<s<<" ";}
    else cout<<mp[s]<<" ";
}
	return 0;
}