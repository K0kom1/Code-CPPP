#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Moi nhap 1 trong 4 lua chon +,-,*,/: ");
    scanf("%c",&c);
    
    printf("Nhap 2 so nguyen: ");
    scanf("%d%d",&a,&b);
    
    switch (c)
    {
	    case '+':
	        printf("%d+%d=%d",a,b,a+b);
	        break;
	    case '-':
	        printf("%d-%d=%d",a,b,a-b);
	        break;
	    case '*':
	        printf("%d*%d=%d",a,b,a*b);
	        break;
	    case '/':
	        printf("%d/%d=%d",a,b,a/b);
	        break;
	    default:
	        break;
    }
    return 0 ;
}
