#include<stdio.h>
#include<math.h>

long long s(long long m)
{
	long long sum=0,a;
	a=floor(sqrt(m));
	for (int j=1;j<=a;j++)
		if (m%j==0)
		{
			sum+=j;
			sum+=(m/j);
		}
	if (a*a==m) sum-=a;
	return sum;
}
int main()
{
	int n,i;
	long long k;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&k);
		printf("%lld\n",s(k));
	}
	return 0;
}

