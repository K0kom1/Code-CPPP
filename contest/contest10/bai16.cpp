#include <bits/stdc++.h>
using namespace std;
#define dd pair<double,double>
#define iid pair<pair<int,int>,double>
bool cmp(iid x, iid y){
	return x.second < y.second;
}
double kc(dd x,dd y){
	double res1=x.first-y.first;
	double res2=x.second-y.second;
	return sqrt(res1*res1+res2*res2);
}

int Goc(int i, int *parent){
	if(parent[i] == -1)
		return i;
	return Goc(parent[i], parent);	
}

void Kruskal(iid *input, int n, int E){
	double wt=0;
	sort(input, input + E, cmp); 
	iid *output = new iid[n - 1];
	int *parent = new int[n+1];
	for(int i = 1; i <= n; i++)
		parent[i] = -1; 
	int count = 0;
	int i = 0;
	while(count != n - 1){
		iid tmp = input[i];
		int Gocdau = Goc(tmp.first.first, parent);//goc dinh dau
		int Goccuoi = Goc(tmp.first.second, parent);//goc dinh cuoi
		if(Gocdau != Goccuoi){ 
			output[count] = tmp;
			count++;
			wt+=tmp.second;
			parent[Gocdau] = Goccuoi; // ve cung 1 goc
		}
		i++;
	}
	printf("%.6lf\n",wt);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		dd dinh[n+1];
		for(int i=1;i<=n;i++){
			double x,y;
			cin >> x >> y;
			dinh[i].first = x;
			dinh[i].second = y;
		}
		int k = 0;
		int e=( (n-1)*n)/2;
		iid *input = new iid[e+2];
		int demcanh = 0;	
		for(int i=1;i<=n-1;i++)
			for(int j=i+1;j<=n;j++){
				double x = kc(dinh[i],dinh[j]);
				input[k].first.first=i;
				input[k].first.second=j;
				input[k].second=x;
				k++;
			}
		int E=k;
		int V=n;	
	//		cout << E << endl;
//		for(int i=0;i<E;i++)
//			cout << input[i].first.first << input[i].first.second << input[i].second << endl;
		Kruskal(input, V, E);
	}
	return 0;
}


