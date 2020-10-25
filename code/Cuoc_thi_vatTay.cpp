#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,k,max=0;
	queue <int> q;
	cin >> n >> k;
	for (int i=0; i < n; i++){
		cin >> x;
		if (max < x) max=x;
		q.push(x);
	}
	if (k>=n-1){
		cout << max;
		return 0;
	}
	while(1){
		int count=0;
		int m=q.front();
		q.pop();
		if (m > q.front()){
			while (m > q.front()){
				q.push(q.front());
				q.pop();
				count ++;
				if (count >= k){
					cout << m;
					return 0;
				}
			}		
		}
		else q.push(m);
	}
	return 0;
}


