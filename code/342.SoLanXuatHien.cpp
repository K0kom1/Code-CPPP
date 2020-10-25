#include <stdio.h>
int b[100];

int main(){
	int x, a[100]; scanf ("%d",&x);
	for (int i=0; i<x; i++){
		scanf ("%d",&a[i]);
		b[a[i]]++;
	}
	for (int i=0; i<x; i++){
		if(b[a[i]]){
			printf ("%d %d\n",a[i], b[a[i]]);
			b[a[i]]=0;
		}
	}
}
