#include <iostream>
using namespace std;
#include<string>
#include<map>
#include<vector>

int main() {
	string s;
	cin>>s;
	int k;cin>>k;
	int A[26];
	int max=0;
	for(int i=0;i<26;i++){
	    cin>>A[i];
	    if(A[i]>max) max=A[i];
	}
	int ans=max*(k*s.length()+(k*(k+1))/2);//cout<<ans<<endl;
	for(int i=0;i<s.length();i++){
	    ans+=(i+1)*A[s[i]-97];
	}
	//cout<<s<<k<<endl;
	cout<<ans;
	return 0;
}