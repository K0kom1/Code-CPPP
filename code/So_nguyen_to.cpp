#include <stdio.h>
#include<math.h>

int snt(int x){
	if(x < 2) return 0;
	int m = trunc(sqrt(x));
	for (int i=2; i<=m; i++)
		if (x%i == 0) return 0;
	return 1;	
}
int main(void) {
	long n;
	scanf("%ld",&n);
	if (snt(n)==1)
		printf("YES");
	else printf("NO");
}
