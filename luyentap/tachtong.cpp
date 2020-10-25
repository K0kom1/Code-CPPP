#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int n,x[100];
int sum[100];
void in(int k){
	for(int j=1;j<=k;j++){
		cout << x[j]<<" ";
		
	}
	cout << endl;
}
void Try(int i){
	for(int j=x[i-1];j<=n-sum[i-1];j++)
		{
			x[i]=j;
			sum[i]=sum[i-1]+j;
			if(sum[i] == n)
				in(i);
			else{
				
				Try(i+1);
			}
		}
}
int main(){
	x[0]=1;
	sum[0]=0;
	cin >> n;
	Try(1);
	return 0;
}

