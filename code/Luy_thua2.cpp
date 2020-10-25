#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7; 
unsigned long long Powll(unsigned long long Hx,unsigned long long Gx) 
{ 

    unsigned long long res = 1; 
    while (Gx) 
	{ 
        if (Gx & 1)	   // Neu Gx le
			res = res * Hx % MOD; 
			
        Gx = Gx >> 1;    // Gx = Gx/2
        Hx = Hx * Hx % MOD;     
    } 
    return res; 
} 
int main()
{
	int a,b,test;
    cin >> test;
    while (test--){
        cin >> a >> b ;
	    cout << Powll(a,b) << endl; // tính a^b
    }
	
	return 0 ;
}

