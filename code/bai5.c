#include <stdio.h>
int a[1001];
void init(int n){
    for (int i=1; i <= n; i++) scanf("%d",&a[i]);
    return;
}
void tim_so(int n){
    int b[12]={0};
    for (int i=1; i <= n; i++) b[a[i]]++;
    int max=b[0],luu=0;
    for (int i=1; i <= 10; i++) 
        if (max < b[i]){
            max=b[i];
            luu=i;
        }
    printf("So %d xuat hien nhieu nhat %d lan.",luu,max);
    return;    
}
int main ()
{
	int n,s;
	scanf("%d",&n);
	init(n);
	tim_so(n);
   return 0;
}
