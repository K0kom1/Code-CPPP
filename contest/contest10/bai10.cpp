#include <bits/stdc++.h>
using namespace std;
#define iii pair<pair<int,int>,int>
bool cmp(iii x, iii y){
	return x.second < y.second;
}

int Goc(int i, int *parent){
	if(parent[i] == -1)
		return i;
	return Goc(parent[i], parent);	
}

void Kruskal(iii *input, int n, int E){
	int wt=0;
	sort(input, input + E, cmp); 
	iii*output = new iii[n - 1];
	int *parent = new int[n];
	for(int i = 1; i <= n; i++)
		parent[i] = -1; 
	int count = 0;
	int i = 0;
	while(count != n - 1){
		iii tmp = input[i];
		int Gocdau = Goc(tmp.first.first, parent);//goc dinh dau
		int Goccuoi = Goc(tmp.first.second, parent);//goc dinh cuoi
		if(Gocdau != Goccuoi){ 
			output[count++] = tmp;
			wt+=tmp.second;
			parent[Gocdau] = Goccuoi; // ve cung 1 goc
		}
		i++;
	}
	cout << wt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int V, E;
		cin >> V >> E;
		iii *input = new iii[E];
		int demcanh = 0;
		for(int i=0;i<E;i++){
			int s,e,w;
			cin >> s >> e >> w;
			input[i].first.first = s;
			input[i].first.second = e;
			input[i].second = w;
		}
		Kruskal(input, V, E);
	}
	return 0;
}
