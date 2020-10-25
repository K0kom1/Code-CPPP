#include<stdio.h>
int main()
{
	long long n;
	int d=0;
	scanf("%lld",&n);
	while (n!=0)
	{
		if ((n%10==4)||(n%10==7)) d++;
		n=n/10;
	}
	if ((d==4)||(d==7)) printf("YES");
	else printf("NO");
	return 0;
}

