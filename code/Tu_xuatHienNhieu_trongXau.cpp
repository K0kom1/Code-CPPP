#include <bits/stdc++.h>
using namespace std;
int demtu(char tam[],char s[])
{	int i=0,j=0,dem=0;
	char temp[100];
    for(i=0;i<strlen(s);i++)
    {	if((i-1<0||s[i-1]==' ') &&  s[i]!=' ' )
		{  //Tim toi vi tri dau tien cua moi tu trong chuoi
            while(s[i]!=' ' &&  i<strlen(s) )
            {	temp[j]=s[i];
    	        i++;
				j++;
            }
            temp[j]='\0';
            j=0;
          	if(strcmp(tam,temp)==0) dem++;
          }
    }
	return (dem);
}
int main()
{	char s[1000], s1[100],s2[2000]="",s3[1000];
	int max=0;
	gets(s);
	strlwr(s);
	strcpy(s3,s);
    char *token = strtok(s3," ");
    while (token != NULL )
    {   if (strstr(s2,token)==NULL) 
  		{ 	strcat(s2,token);
  			strcat(s2," ");
  		}			
    	token = strtok(NULL," " );
    }
    char *token1 = strtok(s2," ");
    while (token1 != NULL)
    {   char tam[100];
    	strcpy(tam,token1);
		int dem=demtu(tam,s);
		if (dem>max)
		{	max=dem;
			strcpy(s1,tam);
		}
		token1 = strtok(NULL," ");
    }
    printf("%s %d",s1,max);
}
