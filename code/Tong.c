#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i;
	char x,s[10000];
	scanf("%s",s);
	scanf("%c",x);
	int n=strlen(s);
	for (i = 0 ; i < n ; i++)
		if (s[i]==x) count++;
	printf("%d",count);
	return 0 ;
}