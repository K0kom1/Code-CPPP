#include <stdio.h>
 
int main ()
{
	int n,sum;
	scanf("%d",&n);
	n++;
	while (n--)
		sum += n*(n+1);
 	printf("%d",sum);
   return 0;
}
