#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int x[1000];
int  n;
int m,Min,cost=0,a[20][20];
bool kt[20];

void update(int,int);
void nhanhcan(int i){
	for(int j=2;j<=n;j++)
		if(kt[j]){
		x[i]=j;
		kt[j]=false;	
		cost+=a[x[i-1]][x[i]];
		if(i==n) update(cost,j);
			else if(cost+(n-i+1)*m<Min) nhanhcan(i+1);
		cost-=a[x[i-1]][x[i]];
		kt[j]=true;
}

}
void update(int c,int k){
	c+=a[k][1];
	if(c<Min) Min=c;
		
}
int main(){
	memset(kt,true,sizeof(kt));
	cin >> n;
	Min=999999;
	m=9999999;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
		
			cin >> a[i][j];	
			if(a[i][j]<m) m = a[i][j];
			}
	x[1]=1;		
	nhanhcan(2);
	cout << Min;
	return 0;
}

