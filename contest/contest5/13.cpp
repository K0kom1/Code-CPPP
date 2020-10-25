#include<bits/stdc++.h>

using namespace std;

unsigned long long act(int n) 
{ 
    unsigned long long Ugly[n], i2 = 0, i3 = 0, i5 = 0, next2 = 2, next3 = 3, next5 = 5, nextUgly = 1; 
    Ugly[0] = 1; 
    for (int i=1; i<n; i++) 
    { 
       nextUgly = min(next2, min(next3, next5)); 
       Ugly[i] = nextUgly; 
       if (nextUgly == next2) 
       { 
           ++i2; next2 = Ugly[i2] * 2; 
       } 
       if (nextUgly == next3) 
       { 
           ++i3; next3 = Ugly[i3] * 3; 
       } 
       if (nextUgly == next5) 
       { 
           ++i5; next5 = Ugly[i5] * 5; 
       } 
    } 
    return nextUgly; 
} 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << act(n) << endl;
	}
	return 0;
}

