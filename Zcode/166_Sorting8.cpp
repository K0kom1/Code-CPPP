#include <bits/stdc++.h>
using namespace std;
const int N=1002;
int main(){
    int test;
    cin >> test;
    while (test--){
        int n,m;
        cin >> n >> m;
        int a[n], b[m],dem[N]={0}, max=0;
        for (int i=0; i < n; i++) cin >> a[i];

        for (int i=0; i < m; i++){
            cin >> b[i];
            dem[b[i]]++;
            if (max < b[i]) max = b[i];
        }
        // dem trong mảng có bao nhiêu ptu lớn hơn i 
        for (int i=max; i >= 0; i--) 
            dem[i-1] += dem[i];        
        int k=dem[0]-dem[2],count = 0;
        // for (int i=0; i < max; i++){
        //     cout << dem[i] << " ";}
        // cout << k << endl;
        for (int i=0; i < n; i++){
            if (a[i]<=1) continue;
            count = count + k + dem[a[i]+1];
            if (a[i]==2) count -= (dem[3] - dem[5]);
            if (a[i] == 3) count += (dem[2]-dem[3]);
            // cout << count << " ";
        }
        cout << count << endl;
    }
    return 0;
}