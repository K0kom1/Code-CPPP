#include <stdio.h> 
#include <string.h>
#include <ctype.h>

char s1[100],s2[100],temp[100],cmp[100];
void del(int n){
	for(int i=n ; i<strlen(s1)-1 ; i++){
		s1[i] = s1[i+1];
	}
	s1[strlen(s1)-1] = '\0';
}

int main(){
	gets(s1);
	gets(s2);
	int mark=0,mark1,nums;
	
	for(int i=0 ; i<strlen(s1) ; i++){
		if(s1[i]==' ' && s1[i+1]==' '){
			del(i);
			i--;
		}
	}
	
	for(int i=0 ; i<strlen(s2) ; i++){
		if(s2[i]==' ' && s2[i+1]==' '){
			del(i);
			i--;
		}
	}
		
	for(int i=0 ; i<=strlen(s1) ; i++){
		if(s1[i]==' ' || s1[i]=='\0'){
			nums = i - mark;
			strncpy(temp,s1+mark,nums);
			mark1 =0;
			for(int j=0 ; j<=strlen(s2) ; j++){
				if(s2[j]==' ' || s2[j]=='\0'){
					if(nums == j-mark1){
						strncpy(cmp,s2+mark1,j-mark1);
						if(strncmp(temp,cmp,nums)==0){
							for(int k=mark ; k<=i ; k++)
								del(mark);
							i=-1;
						}	
					}
					mark1 = j+1;
				}
			}
			mark = i+1;
		}	
	}
	
	mark=0;
	for(int i=0 ; i<=strlen(s1) ; i++){
		if(s1[i] == ' ' || s1[i]=='\0'){
			strncpy(temp,s1+mark,i-mark);
			mark1 = i+1;
			for(int j=i+1 ; j<=strlen(s1) ; j++){
				if(s1[j]==' ' || s1[j]=='\0'){
					if(i-mark==j-mark1){
						strncpy(cmp,s1+mark1,j-mark1);
						if(strncmp(temp,cmp,j-mark1)==0){
							for(int k=mark1 ; k<=j ; k++){
								del(mark1);
							}
							j = mark1-1;
						}
					}
					mark1 = j+1;
				}	
			}
			mark = i+1;			
		}
	}
//	mark=0;
//	for(int i=0 ; i<=strlen(s1) ; i++){
//		if(s1[i]==' ' || s1[i]=='\0'){
//			for(int j=mark ; j<i ; j++)
//				printf("%c",s1[j]);
//			printf("\n");
//			mark = i+1;
//		}	
//	}
	puts(s1);
	return 0;
}
	

