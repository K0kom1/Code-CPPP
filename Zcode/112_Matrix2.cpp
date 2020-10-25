// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+1;
// typedef long long ll;

// int main() {
//     int test;
//     cin >> test;
//     while (test--) {
//         ll n, dem[N]={0}, count=0;
//         cin >> n;
//         ll a[n][n];
//         for (int i=0; i < n-1; i++){
//             for (int j=0; j < n; j++){
//                 cin >> a[i][j];
//                 if (dem[a[i][j]] == i) dem[a[i][j]]++;
//                 // cout << x <<" " << dem[x] << endl;
//             }
//         }
//         for (int j=0; j < n; j++){
//             cin >> a[n-1][j];
//             dem[a[n-1][j]]++;
//             if (dem[a[n-1][j]] == n) count++;
//         } 
//         cout << count << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void reeve(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++)
		sort(a[i],a[i]+n);
	int luu[100];
	int count=0;
	int b[n];
	for(int i=0;i<n;i++) b[i]=0;
	int f=0;
	set<int> st;
	for(b[0]=0;b[0]<n;b[0]++){
		int value=a[0][b[0]];
		bool check=true;
		for(int i=1;i<n;i++){
			while(b[i]<n&&a[i][b[i]]<=value) b[i]++;
			if(a[i][b[i]-1]!=value) check=false; 
        	if(b[i]==n){ 
            	f=1; 
           		break; 
        	} 
		}
		if(check){
			st.insert(value);
			luu[count]=value;
			count++;
		} 
        if(f==1) break; 	
	}
		int dem=0;
	int kiemtra;
	for(int i=0;i<count;i++){
		kiemtra=0;
		for(int j=i;j>=0;j--){
			if(a[i]==a[j]) kiemtra++;
		}
		if(kiemtra==1) dem++;
	}
	cout<<dem<<endl;
}
int main (){
	int t;
	cin>>t;
	while(t--) reeve();
	return 0;
}