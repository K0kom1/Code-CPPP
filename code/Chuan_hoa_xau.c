#include <stdio.h>
#include <string.h>
int main()
{
	char s[150], tmp[150];
	int len=0; //do dai sau
	int i,n ,j=0;//diem dau cua sau
	gets(s);//nhap du lieu

	while (s[i]==' ') i++ ;   // Xoa cach dau
	strcpy(&s[0],&s[i]);
	
	n=strlen(s);				// Xoa cach cuoi
	while (s[n-1]==' ') n-- ;
	s[n]='\0';
	
	i=0;
	while (i<strlen(s))				// xoa cach giua
	{
		if (s[i]==' '&& s[i+1]==' ') 
		{
			strcpy(&s[i],&s[i+1]);
			i-- ;
		}
		i++;
	}
	// int l=strlen(s);
	// while (s[l] != ' ') l--;
	// for ( int i=l+1; i<=strlen(s) ; i++)
	// {
	// 	strupr(s[i]);
	// 	printf("%c",s[i]);
	// }
	strupr(s);
	printf("%s:%d",s,strlen(s)) ;
	return 0;
}
