#include <iostream>
using namespace std;
#include<string>
#include<map>
#include<vector>

int main() {
	string s;
	cin>>s;
	int mc=s[s.length()-1]-48;

int vals,inds=-1;
	for(int i=0;i<s.length();i++){
	    if((s[i]-48)%2==0){
	    if((s[i]-48)<mc){static int valb,indb;valb=s[i]-48;indb=i;swap(s[s.length()-1],s[indb]);cout<<s;return 0;}
	    else{vals=s[i]-48,inds=i;}
	    }
	    }
	    //cout<<inds<<endl;
	    if(inds!=-1){swap(s[s.length()-1],s[inds]);cout<<s;}
	    else cout<<-1;
	return 0;
}