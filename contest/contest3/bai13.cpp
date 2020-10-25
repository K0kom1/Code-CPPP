#include<iostream>
#include<queue>
using namespace std;
string s;
int d,length;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> d;
        cin >> s;
        length = s.size();
        int count[26] = {0};
        priority_queue<int, vector<int>> q;
          for(int i = 0; i < length; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')  count[s[i]-'a']++;
            if(s[i] >= 'A' && s[i] <= 'Z') count[s[i] - 'A']++;
        }
       for(int i  = 0 ; i < 26; i++)
       {
           if(count[i]!=0)  q.push(count[i]);
       }
    
      
       int first;
       first = q.top();
       cout << first << endl;
        if(first  < length/d )   cout << 1 << endl;
        else                    cout << -1 << endl;
        
    }
    
}
