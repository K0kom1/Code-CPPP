#include<bits/stdc++.h>
using namespace std;
unordered_set <string> st;
void solve(string s, string t){
	queue <pair<string, int> > q;
	q.push({s, 0});
	while(!q.empty()){
		pair<string, int> x = q.front();
		q.pop();
		if(x.first == t){
			cout<<x.second+1<<endl;
			return;
		}
		for(int i=0; i<x.first.length(); i++){
			for(char j='A'; j<='Z'; j++){
				string tmp = x.first;
				x.first[i] = j;
				if(st.find(x.first) !=st.end()){
					pair<string, int> tmp1;
					tmp1.first = x.first;
					tmp1.second = x.second +1;
					st.erase(tmp1.first);
					q.push(tmp1);
				}
				x.first = tmp;
			}
		}
	}
}
int main(){
	int t1;
	cin >> t1;
	cin.ignore();
	while(t1--){
		int n;
		cin >> n;
		string s, t;
		cin >> s>> t;
		for(int i=0 ;i<n; i++){
			string s1;
			cin >> s1;
			st.insert(s1);
		}
		solve(s, t);
	}
	return 0;
}
