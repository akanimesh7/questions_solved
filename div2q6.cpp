#include <iostream>

using namespace std;
#include<cmath>
//typedef long double l;
#include<stdio.h>

#include<algorithm>
#include<cmath>
int main()

{
   int n;
   cin>>n;
   int A[n];
   int flags=-1;
   int flage=0;
   cin>>A[0];
   int flagm=-1;
   int band=0;
   for(int i=1;i<n;i++){
        cin>>A[i];
        if(A[i]<A[i-1] && flags==-1) flags=i-1;
   if(flags!=-1 && A[i]<A[i-1]) flage++;
    if(A[i]>A[i-1] && flags!=-1) flagm=i;
    if(A[i]<A[i-1] && flagm!=-1) band=1;
   }
   flage+=flags;
   //cout<<"flags:"<<flags<<""<<flage;
   if(flags==-1){cout<<"yes"<<endl<<flags+2<<" "<<flags+2;return 0;}
   if(band==1){ cout<<"no";return 0;}

   
   /*for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;*/
   sort(A+flags,A+flage+1);
   /*for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }*/
   for(int i=1;i<n;i++){
    if(A[i]<A[i-1]){cout<<"no";return 0;}
   }
   cout<<"yes"<<endl<<flags+1<<" "<<flage+1;
   
   return 0;
}