#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	queue<int>qu;
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		if (s == 6) 
			if(!qu.empty()){
			cout << qu.back()<<endl;
		}
			else cout << "-1" <<endl;
		if (s == 2) 
			if (!qu.empty()) cout << "NO" << endl;
			else cout << "YES" << endl;
		if (s == 3) {
			int n;
			cin >> n;
			qu.push(n);
		}		
		if(s == 5) 
			if (!qu.empty()) cout << qu.front() << endl; 
				else cout << "-1" << endl;
		if (s == 4) if(!qu.empty()) qu.pop();
		if (s == 1) cout << qu.size() <<endl;
		
	}	

	return 0;
}

