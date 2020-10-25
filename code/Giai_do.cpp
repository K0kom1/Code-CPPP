#include<bits/stdc++.h>
using namespace std;
const int N=8000 ;
int a[1001];
void sang_nt(){
	bool check[N + 1];
	for (int i = 2; i <= N; i++)
  		check[i] = true;
	for (int i = 2; i <= N; i++) 
    	if (check[i] == true)
     	   for (int j = 2 * i; j <= N; j += i)
            	check[j] = false;
    int k=0;
	for (int i = 2; i <= N; i++)
		if (check[i] == true)
			a[++k]=i;
	return ;
}
int main()
{
	int n,x;
	cin >> n;
	sang_nt();
	for (int i=0; i < n; i++){
		cin >> x;
		cout << a[x] << endl;
	}

	return 0 ;
}

