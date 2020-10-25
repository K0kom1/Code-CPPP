#include<bits/stdc++.h>

using namespace std;
int l = 0;

void cong(string a, string b){
	string res = "";
	int *sum = new int[a.size() + b.size() + 7];
	int temp = 0;
	for(int i = 0; i<=a.size()-1; i++)
		sum[i] = 0;	
	for(int i = a.size()-1; i>=0; i--){
		if (a[i] + b[i] + temp < 10+'0'+'0'){
			sum[i] = a[i]+b[i]+temp-'0'-'0';
			temp = 0;
			
		}
		else {
			sum[i]=(a[i]-'0'+b[i]-'0'+temp)%10;
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
		}
		else if (la > lb){
		b.insert(0,la-lb,'0');
		}
		a.insert(0,1,'0');
		b.insert(0,1,'0');
		cong (a,b);
		cout << endl;
	}
}


