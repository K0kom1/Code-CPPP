#include <bits/stdc++.h>
using namespace std;
int pre[1005];

void postOrder(int l, int r){
    int  i;
    if(l>r) return;
    for(i = l + 1; i <= r; i++)
        if(pre[i]>pre[l]) break;
    postOrder(l+1,i-1);
    postOrder(i, r);
    cout<<pre[l]<<" ";
}

main(){
    int t,n,i;
    cin >> t;
    while (t--){
        cin >> n;
        for (i = 0; i < n; i++) cin >> pre[i];
        postOrder(0, n - 1);
        cout << endl;
    }
}
