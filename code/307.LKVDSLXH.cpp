#include<bits/stdc++.h>
#define debug(x) cout << x << "= " << x << "\n"
using namespace std;
void delSame(long long a[],long long *N){
   long long i,j,k;
   for (i=0;i<(*N)-1;i++){
    j=i+1;
    while (j<*N)
      if (a[i]==a[j]){
         for (k=j;k<(*N)-1;k++) a[k]=a[k+1];
         *N=(*N)-1;
      }
      else j=j+1;
   }
}
int main(){
	long long n;
	cin >> n;
	long long m=n;
	long long cnt = 0;
	long long a[n];
	long long b[n];
	for (long long i=0; i<n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	delSame(b,&m);	
	for (long long i=0;i<m;i++){
		for(long long j=0;j<n;j++)
			if (b[i]==a[j]) cnt++;
		cout << b[i] << " " << cnt << "\n";
		cnt = 0;
	}
	return 0;
}
