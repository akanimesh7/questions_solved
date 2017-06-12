#include <iostream>
using namespace std;

#include<cmath>
int main() {
	int n;cin>>n;
	int array[n];
	int ind;
	int count=0;
	for(int i=0;i<n;i++){
	    cin>>array[i];
	    if(i>0){
	        if(array[i]<array[i-1]){ count++;ind=i;}
	        
	    }
	}
	if(count==0) cout<<0;
	else if(count==1){
	    if(array[0]>=array[n-1]  ) cout<<n-ind;
	    else cout<<-1;
	}else cout<<-1;
	
	return 0;
}