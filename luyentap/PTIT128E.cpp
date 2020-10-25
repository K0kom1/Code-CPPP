#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tong(ull x,ull y){
	return(x+y)*(y-x+1)/2;
}

int main(){
	int n,t1,t2,t3;
	cin >> n >> t1>> t2 >> t3;
	while((n!=0)&&(t1!=0)&&(t2!=0)&&(t3!=0)){
		ull kq = 0;
		kq += 2*n;
		kq += t1;
		kq += n;
		if (t1 > t2) kq+=(t2-t1);
			else kq +=(n-t2+t1+1);
		if (t3 > t2) kq+=(t3-t2);
			else kq +=(n-t3+t2+1);
	cout << kq << endl;
	cin>>n>>t1>>t2>>t3;	
	}
	
	return 0;
}

