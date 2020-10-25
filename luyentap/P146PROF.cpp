#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int x[100],k,kt1=0,kt2=0;
int a[10];
void xuli();
void Try(int i)
{
	for (int j = x[i-1] + 1; j <= 4 - 3 + i; j++ )
		{
		x[i] = j;
		if (i == 3) xuli();
			else Try(i+1);
		}
}
void xuli()
{	int b[4];
	b[1] = a[x[1]];
	b[2] = a[x[2]];
	b[3] = a[x[3]];
	//for (int i=1;i<=3;i++)	cout << b[i] <<" ";
//	cout <<endl; 
	sort(b+1,b+4);
	if(b[1]+b[2]>b[3]) kt1 =1;
	if(b[1]+b[2]==b[3]) kt2=1;	
}
int main(){
	
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	Try(1);
	if(kt1==1) cout << "TRIANGLE";
	else if(kt2==1) cout << "SEGMENT";
	else cout << "IMPOSSIBLE"; 
	
	return 0;
}

