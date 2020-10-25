#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int x[100],n,k,s,sum=0,dem;

void Try(int i){
	for(int j=x[i-1]+1;j<=n;j++)
		{
			x[i]=j;
			sum+=x[i];
			if(sum == s && i == k){
				
				dem++;
			}
			else
				if(sum+x[i]+1<=s) Try(i+1);
			sum-=x[i];
		}
}



int main(){
	cin >> n >> k >> s;
	while(n!=0 && k!=0 && s!=0){
		x[0]=0;
		sum=0;
		dem = 0;
		Try(1);
		cout << dem << endl;
		
		cin >> n >> k >> s;
	}
	cout << 1;
	return 0;
}

