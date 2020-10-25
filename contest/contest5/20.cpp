#include<bits/stdc++.h>

using namespace std;

string add(string, string);
string act(string);

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin >> s;
		cout << act(s) << endl;
	}
	return 0;
}

string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}

string act(string s)
{
	string s1 = "0";
	int n = s.length();
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			string s2 = s.substr(i, j-i+1);
			s1 = add(s1, s2);
		}
	}
	return s1;
}
