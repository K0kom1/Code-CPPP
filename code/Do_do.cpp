#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[100001],s2[100001];

	cin >> s1 >> s2;
	int a1[27]={0}, a2[27]={0};
	int l1=strlen(s1), l2=strlen(s2);
	for (int i=0; i < l1; i++){			// đếm các kí tự xâu s1
		int k=s1[i];
		a1[k-97]++;
	}	
	for (int i=0; i < l2; i++){			// đếm các kí tự xâu s2
		int k=s2[i];
		a2[k-97]++;	
	}
	int count=0;
	for (int i=0; i < 26; i++)			//tổng sự chênh lệch mỗi kí tự trong 2 xâu=đáp án
		count+= abs(a1[i]-a2[i]);
	printf("%d",count);
	return 0 ;
}

