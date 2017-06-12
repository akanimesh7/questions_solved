#include <iostream>

using namespace std;
#include<cmath>
typedef long long ll;
int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   int array[m+1][n];
   ll A[m+1];
   for(int i=0;i<m+1;i++){
    cin>>A[i];
   }
   for(int x=0;x<n;x++){
            //int p= pow(2,x) & A[m];
        if((ll)pow(2,x) & A[m]){
            array[m][n-1-x]=1;
        }else{array[m][n-1-x]=0;}
   }
     int c=0;
     int ans=0;
   for(int i=0;i<m;i++){
    c=0;
    for(int x=0;x<n;x++){
            int p;

        if((ll)pow(2,x) & A[i]){
            array[i][n-x-1]=1;p=1;
        }else{array[i][n-1-x]=0;p=0;}
    if(p!=array[m][n-1-x])c++;
    }
    if(c<=k){ ans++;}
   }
   cout<<ans;

/*for(int i=0;i<m+1;i++){
    for(int j=0;j<n;j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;

}*/

    return 0;
}