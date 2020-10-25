#include <iostream>
using namespace std;
 
long long MOD=1000000007;
long long mu (long long a, long long b)
{
    if (b==0) return 1;
    if (b%2==0){
        long long k=mu(a, b/2);
        return (k*k)%MOD;
    }
    else{
      long long k=mu(a, b-1);
      return (k*a)%MOD;
    }
}
 
int main ()
{
  
  int test, a, b;
  cin >> test;
  while (test--){
    cin>>a>>b;
    cout<<mu(a, b)<<endl;
  }
  return 0;
}
