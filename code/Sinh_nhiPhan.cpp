#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000],ok=1;

void in(int x){
	for (int i=1; i<=x; i++){
		cout<<a[i];
	}
	cout<<endl;
}

void sinhNhiPhan(){
	int i=n;
	while (a[i]==1 && i>0){
		a[i]=0;
		i--;
	}
	if (i>0) a[i]=1;
	else ok=0;
}
int main(){
		cin>>n;
		while (ok){
			in(n);
			sinhNhiPhan();
		}
}
