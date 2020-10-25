#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
	int j = 0;
int cp(ull a){
	ull b = sqrt(a);
	if (b*b == a) return 1;
		else return 0;
}
int x[100];
void xuli(){
	for (ull i = 1; i <= sqrt(1000000000); i ++){
		ull k = i*i - 1;
		ull delta = 1+8*k;
//		cout << delta << " "<< sqrt(delta);
		if ((cp(delta) == 1) && ((ull)sqrt(delta)%2!=0)) {
			x[j] = k;
			j++;
		}
	}
	return;
}
int main(){
	ull a, b;
	cin >> a >> b;
	xuli();
	j --;
	int k = 1;
	while((a!=0) && (b!=0)){
		int dem = 0;
		for (int i = 1; i<= j; i++){
			if ((x[i]+1>a)&&(x[i]+1<b)) dem ++;
		} 
		cout << "Case " << k <<": " << dem << endl;
		cin >> a >> b;
		k ++;
	}
	return 0;
}


