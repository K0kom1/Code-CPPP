#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j;
	do
	{
		scanf("%d\n", &n);
	}while(n>100 || n<1);
	char s[150][150];
	for(i=0; i<n; i++)
	{
		gets(s[i]);
		strlwr(s[i]);
		while(s[i][0]==' ')
	 		strcpy(&s[i][0], &s[i][1]);
	 		
		while(s[i][strlen(s[i])-1]==' ')
			s[i][strlen(s[i])-1]='\0';
		s[i][0]-=32;	
		for(j=0; j<strlen(s[i]); j++)
		{
			if(s[i][j]==' ' && s[i][j+1]==' ')
			{
				strcpy(&s[i][j], &s[i][j+1]);
				j--;
			}
			else
				if (s[i][j]==' ' && s[i][j+1]!=' ')
					s[i][j+1]-=32;
		}
	}
	
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
			if (strcmp(s[i],s[j])>0) 
			{
				char s1[100];
				strcpy(s1,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],s1);
			}
	for(i=0; i<n; i++)
	{
		printf("(%d)%s\n", i+1,s[i]);
	}
	return 0;
}

