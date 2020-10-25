 #include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	int i = 3;
	bool fib[1001];
	int f[1001];
	memset(fib,false,sizeof(fib));
	fib[0] = true; f[1] = 1;
 	fib[1] = true; f[2] = 1;
 	fib[2] = true;
	while(f[i-1] <= 1000){
		f[i] = f[i-1]+f[i-2];
		fib[f[i]] = true;
		i ++;
	}
	while(t --){
		int n;
		cin >> n;
		int a[n+1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			if (fib[a[i]]) cout << a[i] << " ";
		cout << endl;	
	}
	return 0;
}

