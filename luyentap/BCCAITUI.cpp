#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int n, m,a[100];
ull FOPT=0,value = 0, weight;
typedef struct {
	int v;
	float w;
} bag;
bag x[1000];
bool cmp(bag x, bag y){
	return ((x.v/x.w)>(y.v/y.w));
}

void update(){
	if (FOPT < value) FOPT = value;
	return;
}
void Try(int i){
	for (int j = 1; j >= 0; j--)
		{
		a[i] = j;
		value += x[i].v*a[i];
		weight += x[i].w*a[i];
		if ((i == n) && (weight <= m)) update();
			else  if (weight <= m) if ( value + (m-weight)*(x[i+1].v/x[i+1].w) > FOPT ) 
				Try(i+1);
		value -= x[i].v*a[i];
		weight -= x[i].w*a[i]; 	
	}	
}
int main(){
	cin >> n >> m;
	weight = 0;
	for (int i = 1; i<= n; i++){
		cin >> x[i].w >> x[i].v;
	}
	sort(x+1,x+n+1,cmp);
//	for (int i = 1; i<= n; i++){
//		cout<< x[i].w <<" "<< x[i].v;
//	}
	Try(1);
	cout << FOPT;
	return 0;
}

