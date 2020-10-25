#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		stringstream ss;
		string s;
		cin.ignore();
		getline(cin,s);
		ss << s;
		int count = 0;
		while (!ss.eof())
		{
			ss >> s;
			count++;
		}
			
		cout << count << endl;
	}
	return 0;
}