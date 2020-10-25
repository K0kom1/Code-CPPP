#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int dem = 0;
	int a[n+2];
	stack <int> st;
	for (int i = 1;i<=n;i++)
		cin >> a[i];
	st.push(a[1]);	
	for (int i = 2; i<=n;i++){
		if (!st.empty()) 
		 {
			if (a[i] <= st.top()) {
				dem+=st.size();
				st.push(a[i]);
			}
			else {
				dem += st.size();
				while((a[i] > st.top())&&(!st.empty()))
					{
					st.pop();
					if (st.empty()) goto out;
					}
				out: st.push(a[i]);	
				
			}
		} 
	//	cout << st.size()<<endl;
	}
	cout << dem;	
	return 0;
}

