#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

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
string cong(string a, string b){
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
string tru(string a, string b){
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
	string x,y;
	cin >> x >> y;
	if((x == "0") && (y== "0")) cout << 0<<endl<<0<<endl<<0;
	else{
	
	string a = x, b = y;
	string c = x,d = y;
	int lc = c.length(); /////////////////////////// cong
	int ld = d.length();
		if (ld > lc) {
		c.insert(0, ld-lc, '0');
		}
		else if (lc > ld){
		d.insert(0,lc-ld,'0');
		}
		c.insert(0,1,'0');
		d.insert(0,1,'0');
	cout << cong(c,d) <<endl;	
	int la = a.length(); //////////////////////////// tru
	int lb = b.length();
		if (lb > la) {
		a.insert(0, lb-la, '0');
		cout <<"-"<< tru(b,a);
		}
		else if (la > lb){
			b.insert(0,la-lb,'0');
			cout << tru(a,b);
		}
		else if (a > b) cout << tru(a,b);
				else if (a < b) cout <<"-"<< tru(b,a);
					else cout << "0";
	cout << endl;
	if ((x=="0") || (y=="0")) cout << 0;
		else cout << nhan(x,y);	//////////////////// nhan
}
	return 0;
}

