#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
int main()
{
	int test;
	cin >> test;
	while (test--){
		int n;
		cin >> n;
        int a[N]={0},m,check=1,luu=-1;
		for (int i=0; i < n; i++){
            cin >> m;
            a[m]++;
            if (a[m] == 2 && check){
                luu=m;
                check=0;
            }
        }
		
		if (check==1) cout << -1 << endl;
        else cout << luu << endl;
	}
	return 0 ;
}

