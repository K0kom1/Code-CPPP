#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	char *s=new char[500001];
	int n;
	int k;
	stack<int>st;
	cin >> n >> k;
	cin >> s;
	while(!st.empty()) st.pop();
	st.push(1000);
	for(int i=0;i<n;i++)
		{
			if(k>0){
					if (s[i]<=st.top()) st.push(s[i]);
					else {
							while((s[i]>st.top())&&(k>0)) {
							st.pop();
							k--;
							}
							st.push(s[i]);
							continue;
						}
			}
			if (k==0) st.push(s[i]);
			//cout << (char)st.top()<<" "<<st.size()<<" "<<k << endl;
		}
		while (k>0 && st.size()>1)
    {
        st.pop();
        k--;
    }
	int i = 1;
	char *res=new char[500001];
	while(st.size()>1){
		res[i]=st.top();
		i++;
		st.pop();
	}
	for(int j =i-1;j>=1;j--)
		cout << res[j];
	return 0;
}

