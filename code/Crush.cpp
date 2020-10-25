#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,min=100,count=0,sum=0;
	cin >> n;
	while (n--){
		cin >> x;
		sum+=x;
		if (x % 2){
			count++;
			if (min > x) min=x;
		}
	}
	if (count % 2==0)  sum-=min;
	cout << sum;
	return 0 ;
}

