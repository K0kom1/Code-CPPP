#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d", &n);

	while( n>0){
		m = n%10;
		n/=10;
		if(m != 0 && m != 6 && m != 8)
		{
			printf("0");
			return 0 ;
		}
	}
	printf("1");
return 0;
}
