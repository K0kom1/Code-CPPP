#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
string f[105];
string tich(string a, string b){
	string res = "";
	if(b=="0"||a=="0") return	"0";
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
	int l=0;
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
string tong(string a, string b){
	string res = "";
	int la = a.length(); /////////////////////////// cong
	int lb = b.length();
		if (lb > la) {
		a.insert(0, lb-la, '0');
		}
		else if (la > lb){
		b.insert(0,la-lb,'0');
		}
		a.insert(0,1,'0');
		b.insert(0,1,'0');
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
	int l=0;
	for(int i=0; i<a.size(); i++){
		if(sum[i]!=0){
			l = i;
			break;
			}
	}
	for(int i=l; i<a.size(); i++){
		res+=sum[i]+'0';	 
	}
	return res;
}
int main(){
	f[0]="1";
	for(int i=1;i<=5001;i++)
		{	f[i]="0";
			for(int j=0;j<=i-1;j++)
				f[i]=tong(f[i],tich(f[j],f[i-j-1]));
		}
	
		int n;
		cin >> n;
		
		cout << f[n+1]<<endl;
	
	return 0;
}

