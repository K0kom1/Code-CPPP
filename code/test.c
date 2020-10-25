#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i,n;
	char x,s[10000];
	scanf("%d",&n);

	for (i = 0 ; i < n ; i++)
	{
		scanf("%s",s);
		if (strlen(s) < 5) 
		{
			printf("%s\n",s);
			count++;
		}
	}
	printf("%d",count);
	return 0 ;
}

