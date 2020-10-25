#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int m[9];
void serialNumber()
{
int i=1;
for(int i=1;i<=9;i++){
	int a[9];
		int v= rand()%9+1;
	if(!m[v]){
		m[v]=true;
	printf("%2d", v);
			}
		else i--;
			}
			}
int main(){
	srand(time(NULL));
	int i=1;
	serialNumber();
	return 0;
	}