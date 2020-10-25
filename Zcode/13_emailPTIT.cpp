#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string chuan_hoa(string s) {
    for (int i=0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    return s;
}
int main(){
    stringstream ss;
    string s,s1;
    getline(cin,s);
    ss << s;
    bool check=true;
    do{
        ss >> s;
        if (!ss.eof())
            s1.push_back(s[0]);
        else {
            cout << chuan_hoa(s);
            check=false;
        }
	}while (check);
	cout << chuan_hoa(s1) << "@ptit.edu.vn";
	return 0;
}