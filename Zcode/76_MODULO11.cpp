#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Pow(ll a,ll b, ll m){
	ll res =0;
	while(b){
		if(b & 1) 
			res = (res+a) % m;
		a = (a + a) % m;
		b >>= 1; 
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,b,c;
		cin >> a >> b >> c;
		cout << Pow(a,b,c) << endl;
	}
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// string LargeNumber3(string X, string Y) {
//     int x=X.length(), y=Y.length(), mem[x+y]={0};
//     string res;
//     for (int i=x-1; i >= 0; i--)
//         for (int j=y-1; j >= 0; j--)
//             mem[i+j+1] += (X[i]-'0') * (Y[j]-'0');

//     for (int i=x+y-1; i >= 0; i--)
//         if (mem[i] > 9) {
//             mem[i-1] += mem[i]/10;
//             mem[i] %= 10;
//         }
//     for (int i=0; i < x+y; i++ )
//         res += (mem[i]+'0'); 
//     if (res[0] == '0') res.erase(0,1);
//     return res;
// }
// int main() {
//     int test;
//     cin >> test;
//     while (test--) {
//         string A,B;
//         ll a,b,c,res;
//         cin >> a >> b >> c;
//         a %= c; b %= c;
//         A = (a + '0');
//         B = (b + '0');
//         A= LargeNumber3(A,B);
//         for (int i=0; i < A.length(); i++){
//             res = (res*10 + (A[i] - '0')) % c;
//         }
//         cout << res << endl;
//     }
//     return 0;
// }