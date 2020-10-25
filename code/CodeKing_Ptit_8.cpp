#include <iostream>
#include<vector>
using namespace std;
//kiem tra
inline bool kt ( unsigned long long x, unsigned long long y ) {
    if ((2 * x) % y != 0) return false;
    else {
        if ((((2 * x) / y) - y + 1) % 2 != 0) return false;
        else return true;
    }
}
//uoc
inline void uoc( unsigned long long x, vector<unsigned long long>& u) {
    for (int i = 1; i <= x; i++) {
        if ((2*x) % i == 0 && kt(x, i)) {
            u.push_back(i);
        }
    }
}

inline unsigned long long max(unsigned long long x) {
    unsigned long long max = 0;
    for (int i = 1; i <= (2*x); i++) {
        if ((2*x) % i == 0 && kt(x, i)) {
            if (max < i) max = i;
        }
    }
    return max;
}
int main() {
    int N;
    cin >> N;
    vector<unsigned long long> a;
    vector<unsigned long long> u;
    int k;
    int dem = 0;
    for (int i = 0; i < N; i++) {
        cin >> k;
        a.push_back(k);
    }
    unsigned long long x, y;

    for (int j = 0; j < N-2; j++) {
        //cout << j << "*\n";
        
        if (kt(a[j], a[j + 1])) {
            continue;
        }
        else {
            if (j == 0) {
                if (kt(a[j + 1], a[j + 2])) {
                    a[j] = (a[j + 1] / 2) * (2 + a[j + 1] - 1);
                    //cout << a[j] << "(" << j << "*)" << dem << endl;
                    dem++;
                }
                else {
                    //dell
                    int i = 0;
                    uoc(a[j], u);
                    while (i < u.size()) {
                        if (kt(a[j], u[i]) && kt(u[i], a[j + 2])) {
                            a[j + 1] = u[i];
                            //cout << a[j + 1] << "(" << j + 1 << "^)" << dem << endl;
                            dem++;
                            break;
                        }
                        i++;
                    }
                    if (i == u.size()) {
                        a[j + 1] = max(a[j]);
                        //cout << a[j + 1] << "(" << j + 1 << "%)" << dem << endl;
                        dem++;
                      
                    }
                    u.clear();
                    //}
                }
            }
            else {
                
                    //dell
                    int i = 0;
                    uoc(a[j], u);
                    while (i < u.size()) {
                        if (kt(a[j], u[i]) && kt(u[i], a[j + 2])) {
                            a[j + 1] = u[i];
                           // cout << a[j + 1] << "(" << j + 1 << "^)" << dem << endl;
                            dem++;
                            break;
                        }
                        i++;
                    }
                    if (i == u.size()) {
                        a[j + 1] = max(a[j]);
                        //cout << a[j + 1] << "(" << j + 1 << "%)" << dem << endl;
                        dem++;
                    }
                    u.clear();
                
            }
        }
        u.clear();
       // cout << endl;
    }
    if (kt(a[N - 2], a[N - 1]) == false) {
        a[N - 1] = 1;
        //cout << a[N - 1] << endl;
        dem++;
    }
    cout << dem;
    return 0;
}

