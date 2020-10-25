#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin >> n;
	while(n--){
		scanf("%d + %d = %d",&a,&b,&c);
		if (a+b==c) printf("YES\n");
		else printf("NO\n");
	}
	return 0 ;
}

