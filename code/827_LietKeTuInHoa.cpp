//#include <stdio.h> //Author by Quan dep trai
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[500],store[500]="";

	gets(s);
	int mark=0;
	bool test=1;
	
	for(int i=0 ; i<=strlen(s) ; i++){
		if(islower(s[i]))
			test=0;
		if(s[i] == ' ' || s[i] == '\0')
		{
			if(test){
				strncat(store,s+mark,i-mark+1);
			}
			else test=1;
			mark = i+1;
		}
	}

	puts(store);
	
	return 0;
}
