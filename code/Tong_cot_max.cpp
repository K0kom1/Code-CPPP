#include <stdio.h>
#define max 100

int ktraNT(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}

void nhapmt(int a[][max],int &n)
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
}

void TinhTong(int a[][max],int n,int b[])
{
	for(int k=1;k<=n;k++)
	{
		b[k]=0;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		b[i]=b[i]+a[j][i];
	}
}

int sosanh(int a[][max],int n,int b[])
{
	int MAX=b[1], luu=1; 

	for(int j=2;j<=n;j++)
		if(b[j]<MAX)
		{
            MAX=b[j];
            luu=j;
		}
    printf("%d\n",luu);
	for(int j=1;j<=n;j++)
	{
		printf("%d ",a[luu][j]);
    }
}

int main()
{
	int a[max][max],na,b[max];
	nhapmt(a,na);
	TinhTong(a,na,b);
	sosanh(a,na,b);

}