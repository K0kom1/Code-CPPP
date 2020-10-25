// Liet ke tap con co k phan tu cua tap hop n ptu.
#include<stdio.h>
int n,k,a[10000];
void incauhinh()
{
	for (int i=1; i<=k ; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void tryk(int i)
{
	for ( int j=a[i-1]+1 ; j<=n-k+i ; j++)
	{
		a[i]=j;
		if ( i==k ) incauhinh();
		else tryk(i+1);
	}
}
int main()
{
	scanf("%d%d",&n,&k);
	a[0]=0;
	tryk(1);
	return 0;
}


