//BAI 7. So doi xung
#include<stdio.h>
int main()
{
	int m,n,d,k;
	int a[10000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++)
	{
		m=a[i];k=0;
		if (m==0 ) { printf("YES"); continue ;}
		while (m!=0)
		{
			d=m%10;
		 	m=m/10;
		 	k=k*10+d;
		}
		if (k==a[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

