#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, dem[10]={0};
        long long a;
        cin >> n >> a;
        while (n--) {
            int x=a%10;
            if (x == 4){
                dem[2] += 2;
                dem[3]++;
            }
            else if (x == 6){
                dem[5] ++;
                dem[3] ++;
            } 
                else if (x == 8){
                    dem[2] += 3;
                    dem[7] +=1;
                }
                    else if (x == 9) {
                        dem[7] ++;
                        dem[3] += 2;
                        dem[2] ++;
                    }
                    else dem[x] ++;
            a /= 10;
        }
        for (int i=9; i > 1; i--)
            for (int j=0; j < dem[i]; j++) cout << i;
        cout << endl;
    }
    return 0;
}