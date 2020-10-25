#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	char b[1000];
	gets(a);
	gets(b);
	char *token = strtok(a, " ");
	while (token != NULL){
		if (strcmp(token,b)) printf("%s ", token);;
		token = strtok(NULL, " ");
	}
	return 0;
}