#include <stdio.h> 
#include <string.h>

char s[500],temp[100],cmp[100];

void del(int n){
	for(int i=n ; i<strlen(s)-1 ; i++){
		s[i] = s[i+1];
	}
	s[strlen(s)-1] = '\0';
}

int main(){
	gets(s);
	int count=0,max=0,mark=0,mark1;
	strlwr(s);	
	
	for(int i=0 ; i<strlen(s) ; i++){
		if(s[i]==' ' && s[i+1]==' '){
			del(i);
			i--;
		}
	}

	for(int i=0 ; i<=strlen(s) ; i++){
		if(s[i] == ' ' || s[i] == '\0'){
			count=1;
			strncpy(temp,s+mark,i-mark);
			mark1 = i+1;
			for(int j=i+1 ; j<=strlen(s) ; j++){
				if(s[j]==' ' || s[j]=='\0'){
					if(i-mark==j-mark1){
						strncpy(cmp,s+mark1,j-mark1);
						if(strncmp(temp,cmp,i-mark)==0){
							count++;
							for(int k=mark1 ; k<=j ; k++){
								del(mark1);
							}
							j = mark1-1;
						}
					}
					mark1 = j+1;
				}	
			}	
			
			for(int k=0 ; k<i-mark ; k++)
				printf("%c",temp[k]);
			printf(" %d\n",count);
			mark = i+1;
		}
	}
	
	return 0;
}
