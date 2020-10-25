#include<stdio.h>
int p[27],k,n;;

int main()
{
	
	scanf("%d",&k);
	while( k!=0)
	{
		for ( int i=1; i<=k ; i++ ) scanf("%d",&p[i]);
		int dem=0;
		for (int i=1; i<=k ; i++)
		{
			for (int j=dem; j<p[i]; j++) printf("%d ", i);
			dem=p[i];
		}
	printf("\n");
	scanf("%d",&k);
	}

	return 0;
}


