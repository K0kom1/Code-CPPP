#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t ;
	while(t--){
		int n;
		int check = 1;
		cin >> n;
		string s[n+1];;
		for(int i = 1; i<= n; i++)	
			cin >> s[i];
		
		for (int i = 1; i <= n -1;i++)
				
			for (int k = i + 1; k<=n;k++)
			{
				int dem = 0;
			for (int j = 0; j < s[i].length(); j++)
				if (s[i][j] == s[k][j]) {
					dem++;
				}	
			if (dem == s[i].length()) {
				check = 0;
				break;
			}
			else continue;	
			}
		if (check) cout << "YES";
			else cout << "NO";
		cout << endl;			
	}
	return 0;
}

