#include<bits/stdc++.h>
using namespace std ;
long long m=123456789;
long long mu (long long a, long long b)
{
  if (b==0) return 1;
  if (b%2==0){
    long long k=mu(a, b/2);
    return (k*k)%m;
  }
  else{
    long long k=mu(a, b-1);
    return (k*a)%m;
  }
}
 
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	long long  n ;
	cin >> n ;
	cout<<mu(2, n-1)<<endl;
	return 0 ;
}
