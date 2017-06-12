#include <stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main() {
	
    int n,l;
    scanf("%d%d",&n,&l);
    int array[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
    qsort(array,n,sizeof(int),cmpfunc);
    /*for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }*/
    int mind=2*array[0];
    if(2*(l-array[n-1])>mind) mind=2*(l-array[n-1]);
    for(i=0;i<n-1;i++){
        int d=abs(array[i]-array[i+1]);
        if(d>mind) mind=d;
    }
    long double ans=(long double)mind/2;
    printf("%.10Lf",ans);
	return 0;
}