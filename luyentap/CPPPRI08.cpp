#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
    int kq=0;
    int n,p;
    cin >> n>> p;
    ull res=1;
    while(res<=n/p)
    {
        res*=p;
        kq+=n/res;
    }
    cout<<kq<<endl;
	}	
	return 0;
}

