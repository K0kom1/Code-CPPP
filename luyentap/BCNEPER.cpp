#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int x;
		cin >> x;
		cin >> s;
		int n = s.length() - 1;
		int i = n;
		cout << x << " ";
		while((s[i] <= s[i-1]) && (i > 0)){
			i --;
		}
		if (i == 0) cout << "BIGGEST";
		else {
			
			int min = i;
			for (int j = i ; j <= n; j++)
				if (s[j] > s[i-1]) if (s[j] <= s[min]) min = j;
			int temp = s[min];
				s[min] = s[i-1];
				s[i-1] = temp;
			int p = i;
			int q = n;
			for (int p = i; p <= n-1; p++)
				for (int q = p+1; q <= n; q++)
			if(s[p] >= s[q]){
				int tem = s[q];
				s[q] = s[p];
				s[p] = tem;
				}
					
		cout << s;
	}
		cout << endl;	
		}
		
		
	
	return 0;
}

