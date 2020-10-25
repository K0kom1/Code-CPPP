#include<bits/stdc++.h>

using namespace std;
int l = 0;

void tru(string a, string b){
	string res = "";
	int *sum = new int[a.size() + b.size() + 7];
	int dem = 0;
	int temp = 0;
	for(int i=0; i<=a.size()-1; i++)
		sum[i] = 0;	
	for(int i = a.size()-1; i>=0; i--){
		if (a[i] >= b[i] + temp){
			sum[i] = a[i]-b[i]-temp;
			temp = 0;
		}
		else {
			sum[i]=(a[i]+10)-b[i]-temp;
			temp = 1;
		} 
	}
	
	for(int i=0; i<a.size(); i++){
		if(sum[i]!=0){
			l = i;
			break;
			}
	}
	for(int i=l; i<a.size(); i++){
		cout << sum[i];	 
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		int la = a.length();
		int lb = b.length();
		if (lb > la) {
		a.insert(0, lb-la, '0');
		tru(b, a);
		}
		else if (la > lb){
			b.insert(0,la-lb,'0');
			tru(a,b);
		}
		else if (a > b) tru(a,b);
				else if (a < b) tru(b,a);
					else cout << "0";

		cout << endl;
	}
}

