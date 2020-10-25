#include <stdio.h>

int main() {
    int a,b,c,k,d1,d2;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b) {k=a;a=b;b=k;}
    if (a>c) {k=a;a=c;c=k;}
    if (b>c) {k=b;b=c;c=k;}
    d1=b-a;
    d2=c-b;
    if (d1==d2) printf("%d",(c+d1));
    else
        if (d1<d2) printf ("%d",(b+c)/2);
        else printf ("%d",(a+b)/2);
    return 0;
}
