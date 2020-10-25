#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    while (n%2==0)
    {
        printf("2 ");
        n=n/2;
    }
    while (n%3==0)
    {
        printf("3 ");
        n=n/3;
    }
    
    k=-1;
    do {
        k+=6;
        while (n%k==0) {printf("%d ",k);
            n=n/k;}
        while (n%(k+2)==0){printf("%d ",k+2);
            n=n/k+2;  }     
     }while (n>1);
    return 0;
}
