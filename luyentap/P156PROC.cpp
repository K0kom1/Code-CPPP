#include<iostream>
using namespace std;
int a[100];
char x[1000];
int kt[1000],dem=0,k;
void in(int);
void Try(int i,int n)
{
	for (int j = 1; j <= n; j++ )
		if (kt[a[j]] == 1)
			{
			kt[a[j]] = 0;
			x[i] = a[j];
			if (i == n) in(n);
				else Try(i+1,n);
			kt[a[j]] = 1;	
			}

}
void in(int n){	
	dem++;
	if(dem==k){

	for (int i = 1; i <= n; i ++)
		cout<< x[i];
	
	}
}
int main()
	{	string s;
		cin >> s;
		while(s!="#"){
		dem=0;
		cin>> k;
		int j = 1;
		for (int i=0;i<s.size();i++)
			a[j++] = int(s[i]);
		for (int i = 1; i<= j-1; i++)
			kt[a[i]] = 1;
		Try(1,j-1);
		cout << endl;
		cin >> s;	
	}
	}  
