#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
double kc(double x1,double y1,double x2,double y2){
	return(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
typedef struct{
	double x,y;
}toado;
int main(){
	int n;
	cin >> n;
	toado a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y;
	double ax,ay,bx,by;
	int q;
	cin >> ax >> ay >> bx >> by >> q;
	toado b[q+1];
	for (int i =1;i<=q;i++)
		cin >> b[i].x>>b[i].y;
	for(int i = 1; i<=q;i++){
		int dem = 0;
		for(int j=1;j<=n;j++)
			{
				double kc1 = kc(a[j].x,a[j].y,ax,ay);
				double kc2 = kc(a[j].x,a[j].y,bx,by);
				if((kc1<=b[i].x)||(kc2<=b[i].y)) dem++;
			}
		cout <<dem <<endl;	
	}
				
	return 0;
}

