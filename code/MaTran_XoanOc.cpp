#include <iostream>
using namespace std;
#define max 100
int main()
{
	int a[max][max],n,m,k=1;
	cin >> m >> n;
	int p=0, dong=m, cot=n;

	while (k <= m*n){
		for(int i = p; i < cot; i++) /*Loop to access the first row of the array*/
			a[p][i] = k++;
		for(int i = p+1; i < dong; i++) /*Loop tp access the last column of the array*/
			a[i][cot-1] = k++;

		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--) /*Loop to access the last row of the array*/
				a[dong-1][i] = k++;
		}	
		if(p!=cot-1){
			for(int i = dong-2; i > p; i--) /*Loop to access the first column of the array*/
				a[i][p] = k++;
		}	
		p++; 
        dong --; 
        cot --;
	}
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}	
   return 0;
}
