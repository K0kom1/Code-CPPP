#include<bits/stdc++.h>
using namespace std;

const int N=1e9;

void Sorting15() {
    int n,k;
    cin >> n >> k;
    int a[n+1];
    a[n]=N;
    for (int i=0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    long long count=0;
    int j=1;
    for (int i=0; i < n-1; i++) {

        while (j < n && a[j]-a[i] < k) j++;
//        cout << i << " "<<j<< " ";
        count += j-i-1;
    }
    cout << count << endl;
    return;
}

int main()
{
	int test;
	cin >> test;
	while(test--){
        Sorting15();
	}
	return 0 ;
}