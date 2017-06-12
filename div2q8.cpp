#include <iostream>
using namespace std;
#include <map>
#include<string>
#include<cmath>

int main() {
int t;
cin>>t;
for(int j=0;j<t;j++){
    long long a;cin>>a;
    if(a==1||a==2||a==3) cout<<"NO"<<endl;
    else{
    long long c=(long long)sqrt(a);//cout<<"sqrt"<<a<<"="<<c;
    if(c*c==a){
        if(c%2==0&&c!=2){cout<<"NO"<<endl;}
        else if(c==2){cout<<"YES"<<endl;}
        else{
        int flag=0;
        for(int i=3;i*i<=c;i+=2){
            if(c%i==0) {flag=1;break;}
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    }else{
        cout<<"NO"<<endl;
    }
        
    }
    
    
}
	return 0;
}