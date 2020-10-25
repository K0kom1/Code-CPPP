#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string kq = "";
		int x = (n-1)/9;
		int y = (n-1)%9;
		for (int i = 1; i<= x; i++)
			 kq.append("123456790");
		for (int i = 1; i <= y; i++)	kq.push_back(char(i+48));
		for (int i = y+1; i>= 2; i--)	kq.push_back((char) i+48);
		for (int i = 1; i <= x; i++)
			kq.append("098765432");
		kq += '1';
		cout << kq << endl;	  	 
	}
	return 0;
}
