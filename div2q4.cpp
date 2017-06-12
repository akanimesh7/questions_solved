#include <iostream>

using namespace std;
#include<cmath>
typedef long long ll;
ll val(ll n){
return (n*(n-1))/2;
}
int main()

{
  ll n,m;
  cin>>n>>m;
  ll amax=val(n-m+1);
  ll p=n/m;
  ll r=n%m;
  ll amin=0;
  amin+=r*val(p+1)+(m-r)*val(p);
  cout<<amin<<" "<<amax;

}