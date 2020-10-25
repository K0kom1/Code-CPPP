#include<bits/stdc++.h>
using namespace std;
const int N=1000000 ;
bool check[N + 1];
//int snt(int x){
//	if(x < 2) return 0;
//	int m=trunc(sqrt(x));
//	for (int i=2; i<=m; i++)
//		if (x%i == 0) return 0;
//	return 1;	
//}
void sang_nt(){
	for (int i = 2; i <= N; i++)
		check[i] = true;
	for (int i = 2; i <= N; i++) 
    	if (check[i] == true)
			for (int j = 2 * i; j <= N; j += i)
            	check[j] = false;
	return ;
}

int main()
{
	sang_nt();
	int n,count=0;
	cin >> n;
	int x,b[n+1][n+1]={0};
	for (int i=1; i <= n; i++){
		cin >> x;
		if (check[x]==true) 
			b[i]=b[i-1]+1;
		else b[i]=b[i-1];
		
		for (int j=1; j <= i; j++){
			int k=b[i]-b[j-1];
			if (k >= i-j+1-k) count ++;
		}
	}
	cout << count;
	return 0 ;
}

