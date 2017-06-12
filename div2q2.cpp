#include <iostream>

using namespace std;
int val(int start,int last,int number){
if(last>=start) return last-start;
else{
    return(number-start+last);
}
}
int main()
{
   int n,m;
   cin>>n>>m;
   long long ans=0;
   int prev=1;
   for(int i=0;i<m;i++){
    int h;cin>>h;

   ans+=val(prev,h,n);
   prev=h;
}
cout<<ans;
    return 0;
}