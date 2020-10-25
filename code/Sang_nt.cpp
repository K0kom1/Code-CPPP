#include <stdio.h>
 
int main(){
	int N = 1000000,count=0;
    bool check[N + 1];
	for (int i = 2; i <= N; i++)
  		check[i] = true;

    for (int i = 2; i <= N; i++) 
    	if (check[i] == true)
     	   for (int j = 2 * i; j <= N; j += i)
            	check[j] = false;

	for (int i = 2; i <= N; i++)
		if (check[i] == true){
			printf("%d ", i);
			count++;
		}
	printf("\n%d",count);
	return 0;
}
