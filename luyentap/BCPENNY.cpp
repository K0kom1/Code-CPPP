#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	int x = 0;
	while(t--){
		cin >> x;
		int a[10];
		for (int i = 1; i<= 8; i++)	
			a[i] = 0;
		string s;
		cin >> s;
		for (int i = 0; i <= 37; i++){
			string y = "";
			y += (char)s[i];
			y += (char)s[i+1];
			y += (char)s[i+2];
				if(y == "TTT") a[1]++; 
				if(y == "TTH") a[2]++;
				if(y == "THT") a[3]++; 
				if(y == "THH") a[4]++; 
				if(y == "HTT") a[5]++; 
				if(y == "HTH") a[6]++; 
				if(y == "HHT") a[7]++; 
				if(y == "HHH") a[8]++; 
		}
			cout << x <<" ";
			for (int i = 1; i<= 8; i++)	
				cout << a[i] << " ";
			cout << endl;
			
		
	}
	return 0;
}

