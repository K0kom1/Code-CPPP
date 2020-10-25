#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef struct{
	string name;
	int p1sub,p1time,p2sub,p2time,p3sub,p3time,p4sub,p4time;
	int point, sub;} acm;
bool cmp(acm x,acm y){
	return x.sub > y.sub;
}
int main(){
	int n;
	cin >> n;
	acm a[n+1];
	for (int i = 1; i<= n; i++){
	
		cin >> a[i].name >> a[i].p1sub >> a[i].p1time;
		cin >> a[i].p2sub >> a[i].p2time;
		cin >> a[i].p3sub >> a[i].p3time;
		cin >> a[i].p4sub >> a[i].p4time;
		a[i].point = 0;
		a[i].sub = 4;
		}
	for (int i = 1; i<= n;i++){
		if (a[i].p1time != 0) a[i].point += a[i].p1time + (a[i].p1sub-1)*20;
			else a[i].sub --;
		if (a[i].p2time != 0) a[i].point += a[i].p2time + (a[i].p2sub-1)*20;
			else a[i].sub --;
		if (a[i].p3time != 0) a[i].point += a[i].p3time + (a[i].p3sub-1)*20;
			else a[i].sub --;
		if (a[i].p4time != 0) a[i].point += a[i].p4time + (a[i].p4sub-1)*20;
			else a[i].sub --;			
	}
	sort(a+1,a+n+1,cmp);
	int max = a[1].sub;
	int min = a[1].point;
	int kq = 1;
	for (int i = 2; i <= n; i++){
		if (a[i].sub == max) if (a[i].point < min) {
					kq = i;
					min = a[i].point;}
	}
//	for (int i = 1; i<= n; i++)
//		cout << a[i].name<< " "<< a[i].sub <<" "<< a[i].point<<endl;
	cout << a[kq].name<< " "<< a[kq].sub <<" "<< a[kq].point;
	return 0;
}

