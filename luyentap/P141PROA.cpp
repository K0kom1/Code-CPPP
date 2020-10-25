#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef struct{
	int T;
	char C;
}quizz;
int main(){
	int k;
	cin >> k;
	int n;
	cin >> n;
	quizz a[n+2];
	for (int i =1;i<=n;i++)
		cin >> a[i].T >>a[i].C;
	int time = 210,i = 1;	
	while (1){
		time-=a[i].T;
		if (time<0) break;
		if (a[i].C=='N') i++;
			else if(a[i].C=='P') {
					i++;
			}
				else if (a[i].C=='T') {
					i++;
					k = (++k)%8;
					if (k==0) k = 8;
				}
			//cout << time <<" "<< k <<" "<< i << endl;	
	}
	cout << k; 
	return 0;
}

