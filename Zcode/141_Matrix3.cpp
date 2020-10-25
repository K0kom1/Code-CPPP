#include <iostream>
using namespace std;
#define max 100
int Matrix3(int m, int n, int a[max][max]) {
    int p=0, dong=m, cot=n,k=1;
	while (k <= m*n){
		for(int i = p; i < cot; i++) {
            k++ ;
			cout << a[p][i] << " ";
        }
		for(int i = p+1; i < dong; i++) {
            k++ ;
			cout << a[i][cot-1] << " ";
        }
		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--) {
                k++ ;
                cout << a[dong-1][i] << " ";
            }
		}	
		if(p!=cot-1){
			for(int i = dong-2; i > p; i--) {
                k++ ;
				cout << a[i][p] << " ";
            }
		}	
		p++; 
        dong --; 
        cot --;
	}
    return 0;
}
int main()
{
    int test;
    cin >> test;
    while (test--) {
        int a[max][max],n,m;
        cin >> m >> n;
        for(int i=0; i < m; i++)
            for (int j=0; j < n; j++) 
                cin >> a[i][j];
        Matrix3(m,n,a);
	    cout << endl;
    }
    return 0;
}
