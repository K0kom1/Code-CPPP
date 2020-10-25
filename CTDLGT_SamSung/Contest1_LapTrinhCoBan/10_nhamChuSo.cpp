#include<bits/stdc++.h>
using namespace std;
int min(int x){
	int sum=0,i=0;;
	while(x){
		int m=x%10;
		if (m==6) m=5;
		sum+=m*pow(10,i);
		x/=10;
		i++;
	}
	return sum;
}
int max(int x){
	int sum=0,i=0;;
	while(x){
		int m=x%10;
		if (m==5) m=6;
		sum+=m*pow(10,i);
		x/=10;
		i++;
	}
	return sum;
}
int main()
{
	int a,b;
	cin >> a >> b;
	cout << min(a)+min(b) <<" "<< max(a)+max(b);

	return 0 ;
}

