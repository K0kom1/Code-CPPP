//#include <stdio.h>
//int a[11]={1,2,5,10,20,50,100,200,500,1000};
//void dt(int n)
//{
//    int dem=0, i=10;
//    while (n!=0)
//    {
//        i--;
//        dem+=n/a[i] ;
//        n=n%a[i] ;
//    }
//    printf ("%d\n", dem);
//    return ;
//}
//
//int main() {
//    int t;
//    scanf("%d",&t) ;
//    
//    for (int i=1; i<=t; i++)
//    {
//        int n;
//        scanf("%d",&n);
//        dt(n);
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int a[11] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	int test , n ;
cout << a[10] << " " << a[9];
	cin >> test ;
	while (test--) {
		cin >> n ;
		int t = 0 ,i = 9;
		while (n > 0) {
			t += n / a[i];
			n %= a[i];
			i--;
		}
		cout << t << endl;
	}
	return 0 ;
}
