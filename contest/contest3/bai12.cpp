#include<iostream>
using namespace std;
string s;
int length;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int count[26]={0};
        length = s.size();
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')  count[s[i]-'a']++;
        }
        int max = count[0];
        for(int i = 1; i < 26; i++)
        {
            if(count[i] > max)  max=count[i];
        }
        if(length % 2 == 0)
        {
            if(max <= length/2) cout << 1 << endl;
            else                    cout << -1 << endl;
        }
        else
        {
            if(max <= (length/2+1))   cout << 1 << endl;
            else                        cout << -1 << endl;
        }
    }
    
}
