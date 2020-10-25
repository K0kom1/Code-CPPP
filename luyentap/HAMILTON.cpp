#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int V,E,x[100],test=0;
bool kt[100],ke[100][100];
bool check();

void hoanvi(int i){
	for(int j=1;j<=V;j++)
		if (kt[j]){
			x[i] = j;
			kt[j] = false;
			if(i==V && check()) {
				test++;
				if(test==1){
				for(int i=1;i<=V;i++)
				 cout << x[i] << " ";
				 cout << x[1];
			}
			}
			else if(i < V) hoanvi(i+1);
			kt[j] = true;
		}
}

bool check(){
	for(int i=1;i<=V-1;i++)
		if(!ke[x[i]][x[i+1]]) return false;
	if(ke[x[1]][x[V]]) return false;
	return true;	 
}

int main(){
	
	
		cin >> V >> E;
		for(int i=1;i<=V;i++)
			for(int j=1;j<=V;j++)
				ke[i][j]=false;
		for(int i=1;i<=E;i++){
			int a,b;
			cin >> a >> b;
			ke[a][b]=true;
			ke[b][a]=true;
		}
		for(int i=1;i<=V;i++) kt[i]=true;
		
		hoanvi(1);
	
	return 0;
}

