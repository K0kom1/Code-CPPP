#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    string a, b;
    int Case=0;
    while(1)
    {
        cin>>a>>b;
        if (a=="END" && b=="END") break;
        Case++;
        int dema[128], demb[128];
        for (int i=32; i<=126; i++)
        {
            dema[i]=0;
            demb[i]=0;
        }
        int lena=a.length();
        int lenb=b.length();
        for (int i=0; i<lena; i++)
        {
            int cs=a[i]-0;
            dema[cs]++;
        }
        for (int i=0; i<lenb; i++)
        {
            int cs=b[i]-0;
            demb[cs]++;
        }
        int kt=1;
        for (int i=97; i<=122; i++)
        {
            if (dema[i]!=demb[i])
            {
                kt=0;
                break;
            }
        }
        if (kt==1) cout<<"Case "<<Case<<": same"<<endl;
        else cout<<"Case "<<Case<<": different"<<endl;
    }
    
    return 0;
}
