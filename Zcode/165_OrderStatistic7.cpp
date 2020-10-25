#include<bits/stdc++.h>
using namespace std;
int Max=0,*A;
int Find_max(int i, int k){
    Max=i;
    for (int j=i; j < i+k; j++){
        if (A[Max] <= A[j]) {
            Max = j;
        }
    }
    return Max;
}
int main(){
    int test;
    cin >> test;
    while (test--) {
        int n, k,m;
        cin >> n >> k;
        A = new int[n];
        for (int i=0; i < n; i++){
            cin >> A[i];
        }
        Max=0;
        for (int i=0; i < k; i++)
            if (A[Max] <= A[i]) Max = i;
        cout << A[Max] << " ";
        for (int i=k; i < n; i++){
            if (A[Max] <= A[i]) Max=i;
            if (Max == i-k) {
                Find_max(i-k+1, k);
            }
            cout << A[Max] << " ";
        }
        cout << endl;
        delete(A);
    }
	return 0;
}