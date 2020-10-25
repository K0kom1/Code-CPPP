 #include<bits/stdc++.h>
 using namespace std;
 const long long N=1e8;
 int main()
 {
 	int test;
 	cin >> test;
 	
 	while(test--){
        int n, m;
        long long x;
 		cin >> n >> m;
 		long long max=N*-1, min=N;
 		for (int i=0; i < n; i++) {
            cin >> x;
            if (max < x) max = x;
        }

 		for (int i=0; i < m; i++) {
            cin >> x;
            if (min > x) min = x;
        }
 		cout << min*max << endl;
 	}
 	return 0 ;
 }

