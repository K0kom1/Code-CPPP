#include<bits/stdc++.h>
#include<stdio.h>
#include <string.h>

int main(){
	char c[50];
	gets(c);
	bool test;
	int mark;
		
	for(int i=strlen(c) ; i>=0 ; i--){
		
		if(c[i]=='\0' && c[i-1] != ' '){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j] ==' ' && c[j+1] != ' '){
					for(int k=j+1 ; k<i ; k++){
						strupr(&c[k]);
						printf("%c",c[k]);
					}
					mark=j;
					break;
				}
			}
		}
	}
	printf(", ");
	
	for(int i=0 ; i<=mark ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' ){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j-1] ==' ' || j==0){
					for(int k=j ; k<i ; k++){
						if(k==j){
							strupr(&c[k]);
							printf("%c",c[k]);
						}
							
						else {
							strlwr(&c[k]);
							printf("%c",c[k]);		
						}
					}
					printf(" ");
					break;
				}
			}					
		}
	}
	
	return 0;
}
	

