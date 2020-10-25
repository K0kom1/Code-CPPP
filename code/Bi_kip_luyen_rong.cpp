#include<stdio.h>
int main()
{
	int s,n,x[10000], y[10000];
	scanf("%d%d", &s, &n);
	for (int i=1; i<=n ; i++) scanf("%d%d", &x[i], &y[i]);
	
	for (int i=1; i<=n ; i++)
		for (int j=i+1; j<=n ; j++)
			if ( x[i]>x[j])
			{
				int k=x[i];
				x[i]=x[j];
				x[j]=k;
				
				k=y[i];
				y[i]=y[j];
				y[j]=k;
			}
	
	for (int i=1; i<=n ; i++)
		if (s<=x[i]) { printf("NO") ; return 0 ; }
		else s+=y[i] ;
	printf("YES");
	return 0;
}


