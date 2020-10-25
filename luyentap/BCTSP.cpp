#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n;
ull a[1009][1009];
ull kt[1009];
ull fopt =2000000000, cost = 0;
ull Min = 2000000000;
ull x[1009];
void init(){
	cin >> n;
	x[1] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)			
			if ((a[i][j] < Min) && (i != j)) Min = a[i][j];		
	for (int i = 1; i <= n; i++) kt[i] = 1;		
	return;		
}
void brand_and_bound(int i){
	for (int j = 2; j <= n ; j++)
		if (kt[j]){
			kt[j] = 0;
			x[i] = j;
			cost += a[x[i-1]][x[i]];
			if (i == n){
					
					if (cost  + a[n][1]< fopt) fopt = cost+a[n][1];
				
				}
				else if (cost+ (n-i+1)*Min < fopt) brand_and_bound(i+1);
 			kt[j] = 1;
 			cost -= (a[x[i-1]][x[i]]);
		}
}
int main(){
	init();
	brand_and_bound(2);
	cout << fopt;
	return 0;
}

