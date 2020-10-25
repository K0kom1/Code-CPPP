#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
string nhan(string a, string b){
	string res = "";
	int *sum = new int[a.size() + b.size() + 7];
	int dem = 0,l;
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
		res+= (sum[i]+'0');
		
	}
	return res;
}
string xau(int n){
	string s="";
	while(n){
		int mod = n % 10;
		s.insert(0,1,mod+'0');
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int dem = 0;
	string res="1";
	int n,x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
		{
			string a = xau(i);
			//cout << a << " ";
			res = nhan(res,a);
			//cout << res << endl;
		}
	for (int i = 0; i<res.length();i++)
		if((int)res[i] == x+48) dem ++;
	cout << dem<< endl;	
	}
	
	return 0;
}

