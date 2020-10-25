#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i=1;i<=n;i++)
            cin >> a[i];
    int f[n+1];
    for(int j=1;j<=m;j++)
		f[j]=m+1;
    f[0]=0;
    for(int i=1;i<=n;i++)
    	for(int j=a[i];j<=m;j++)
    		if(f[j]>1+f[j-a[i]]) 
				f[j]=1+f[j-a[i]];
    if(f[m] == m+1) cout<<"-1";
    else cout<<f[m];
    return 0;
     
}

