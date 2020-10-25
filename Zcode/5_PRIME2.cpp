#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void test ()
{
  int t;
  cin >> t;
  while (t--) {
    ll n,max=2;
    cin >> n;
    while (n % 2 == 0) {
      n >>= 1;
	  }
    for (int i = 3; i <= sqrt (n); i += 2) {
	    while (n % i == 0) {
	      max = i;
	      n /= i;
	    }
	  }
    if (n > 2) max=n;
    cout << max << endl;
  }
}

int main ()
{
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  test ();
  return 0;
}