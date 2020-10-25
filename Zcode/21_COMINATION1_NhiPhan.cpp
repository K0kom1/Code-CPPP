#include<bits/stdc++.h>
using namespace std;
int a[1000],ok=1;

void in(int x){
	for (int i=1; i<=x; i++){
		cout<<a[i];
	}
	cout << " ";
}

void sinhNhiPhan(int n){
	int i=n;
	while (a[i]==1 && i>0){
		a[i]=0;
		i--;
	}
	if (i>0) a[i]=1;
	else ok=0;
}
int main(){
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin >> n;
        ok=1;
        while (ok) {
            in(n);
            sinhNhiPhan(n);
        }
        cout << endl;
    }
}
