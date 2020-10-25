#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
long long a[N],b[N],c[N];
void Searching16() {
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    for (int i=0; i < n1; i++) cin >> a[i];
    for (int i=0; i < n2; i++) cin >> b[i];
    for (int i=0; i < n3; i++) cin >> c[i];
    bool check = false;
    int y=-1, z=-1;
    for (int x=0; x < n1; x++) {
        while (x < n1 && a[x] == a[x+1]) x++;
        while (y < n2-1 && b[y+1] <= a[x]) y++;
        while (z < n3-1 && c[z+1] <= a[x]) z++;
        if (a[x] == b[y] && a[x] == c[z]) {
            check = true;
            cout << a[x] << " ";
        } 
        if (y >= n2-1 || z >= n3-1) break;
    }
    if (!check) cout << "-1";
    cout << endl;
    return;
}
int main()
{
	int test;
	cin >> test;
	while(test--){
        Searching16();
	}
	return 0 ;
}