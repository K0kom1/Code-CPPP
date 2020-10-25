#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef struct{
		int s;
		int f;
	}Time;
bool cmp(Time x,Time y){
	return x.f<y.f;
}
int main(){
	int n;
	cin >> n;
	Time a[n+1];
	for(int i=1;i<=n;i++)	
		cin>>a[i].s>>a[i].f;
	sort(a+1,a+n+1,cmp);	
	//for(int i=1;i<=n;i++)	
	//	cout<<a[i].s<<" "<<a[i].f<<endl;
	int end = 0,dem=0;
	for(int i=1;i<=n;i++)
		{
			if(a[i].s>=end){
				dem++;
				end=a[i].f;
			} 
			}
	cout << dem;			
	return 0;
}

