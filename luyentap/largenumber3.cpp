#include<bits/stdc++.h>

using namespace std;
int l = 0;

string nhan(string a, string b){
	string res = "";
	int *sum = new int[a.size() + b.size() + 7];
	int dem = 0;
	for(int i=0; i<=a.size() + b.size(); i++)
		sum[i] = 0;	
	for(int i = a.size()-1; i>=0; i--){
		for(int j = b.size()-1; j>=0; j--){
			sum[i+j+1] += (a[i]-'0')*(b[j]-'0');
		}
	}
	for(int i = a.size() + b.size() ; i>=0; i--){
		if(sum[i] > 9){
			sum[i-1] += sum[i] / 10;
			sum[i] %= 10;
		}
	}
	for(int i=0; i<a.size() + b.size(); i++){
		if(sum[i]!=0){
			l = i;
			break;
			}
	}
	for(int i=l; i<a.size() + b.size(); i++){
		res+=(sum[i]+'0');	 
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << nhan(a,b);
		cout << endl;
	}
}
