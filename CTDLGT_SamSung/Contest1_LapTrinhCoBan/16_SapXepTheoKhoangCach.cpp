 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int test;
 	cin >> test;
 	int n, X;
 
 	while(test--){
		
 		cin >> n >> X;
 		int a[n+1], b[n+1];
 		for (int i=0; i<n; i++){
 			cin >> b[i];
 			a[i] = abs(b[i]-X);
 		}

 		for (int i=0; i < n; i++)
 			for (int j=0; j < n-1; j++)
 				if (a[j] > a[j+1]){
 					swap(a[j],a[j+1]);
 					swap(b[j],b[j+1]);
 				}
 		for (int i=0; i < n; i++) cout << b[i] << " ";
 		cout << endl;
 		}
 	return 0 ;
 }

