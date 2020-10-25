#include<bits/stdc++.h>

using namespace std;

int Mod(string, int);

int main()
{
	string x;
	int y, nb = 0;
	cin >> x >> y;
	while(y--) 
		x = x + '0';
	for(int i = 0; i < x.length(); ++i)
		nb = nb * 10 + (int)x[i] - '0';
	while(Mod(x, nb) != 0)
		x = x + '0';
	cout << x;
	return 0;
}

int Mod(string num, int a) 
{ 
    int res = 0; 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 
