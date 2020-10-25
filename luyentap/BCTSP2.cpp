#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n;
ull a[1009][1009];
bool kt[1009];
ull fopt =1000000000, cost = 0;
ull Min = 1000000000;
ull x[1009];
void init(){
	cin >> n;
	for (int i = 0; i <= n; i++){
		a[i][0] = 0;
		a[0][i] = 0;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)			
			if ((a[i][j] < Min) && (i != j)) Min = a[i][j];		
	memset(kt,true,sizeof(kt));		
	return;		
}
void brand_and_bound(int i){
	for (int j = 2; j <= n ; j++)
		if (kt[j] == true){
			kt[j] = false;
			x[i] = j;
			cost += a[x[i-1]][x[i]];
			if (i == n){
					if (cost +  a[x[i]][1]< fopt) fopt = cost + a[x[i]][1];
				}
				else if (cost+ (n-i+1)*Min < fopt) brand_and_bound(i+1);
 			kt[j] = true;
 			cost -= (a[x[i-1]][x[i]]);
		}
}
int main(){
	init();
	brand_and_bound(2);
	cout << fopt;
	return 0;
}

