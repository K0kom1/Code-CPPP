#include<stdio.h>
#define max 100

void nhapmang(int a[][max],int b[][max],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	
	for(int k=0;k<n;k++)
	{
		for(int h=0;h<m;h++)
		scanf("%d",&b[k][h]);
	}
}

void Tinh(int a[][max],int b[][max],int m,int n,int c[][max])
{
	for(int k=0;k<m;k++)
	{
		for(int h=0;h<m;h++)
		c[k][h]=0;
		
	}
	for(int i=0;i<m;i++)
	{
		for(int x=0;x<m;x++)
		{
			for(int j=0;j<n;j++)
		c[i][x]=c[i][x]+a[i][j]*b[j][i];
		}
	}
}
void Xuat(int c[][max],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[max][max],b[max][max],c[max][max],na,nb;
	nhapmang(a,b,na,nb);
	Tinh(a,b,na,nb,c);
	Xuat(c,na,nb);
}
