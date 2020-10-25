#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int kt = 1;
	
	int a[n+1][n+1];
	int d[n+1];
	int tmp;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			cin >> a[i][j];
    memset(d,0,sizeof(d));
    for (int i=1;i<=n-1;i++)
		for (int j=i+1;j<=n;j++)
        	if (a[i][j]==1){
				if ((d[i]==0) && (d[j]==0)) {
				d[i]=1;
        		d[j]=2;
                continue;
            }
               if (d[i]!=0){	
			       if (d[i]==1) 
          				tmp=2;
              		else
                    	tmp=1;
 
                   if (d[j]==0) d[j]=tmp;
                    else
                        if (d[j]==d[i]){
                       	cout << "NO" <<endl;
                        kt = 0;
						break;
               }
    		}
        else
        {
		if (d[j]==1)	tmp=2;
       		else	tmp=1;
        d[i]=tmp;
         
		}
    }
        if(kt == 1)cout << "YES"<<endl;
    cin >> n;
	}
	return 0;
}

