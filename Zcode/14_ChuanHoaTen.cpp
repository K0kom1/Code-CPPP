#include<bits/stdc++.h>
using namespace std;
string chuan_hoa_ho(string s) {
    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for (int i=1; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    return s;
}
string chuan_hoa_ten(string s) {
    for (int i=0; i < s.length(); i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
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
            cout << " " << chuan_hoa_ho(s);
        else 
            check=false;
	}while (check);
    cout << ", " << chuan_hoa_ten(s);
	return 0;
}