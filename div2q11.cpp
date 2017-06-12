#include <iostream>
using namespace std;

#include<cmath>
int main() {
	long long r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	double doori=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
	double aukaat=2*r;
	cout<<ceil(doori/aukaat);
	
	return 0;
}