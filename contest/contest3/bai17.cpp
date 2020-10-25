#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

string s;
int k,length;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        cin >> k;
        cin >> s;
        length = s.size();
        int count[26]={0};
        for(int i = 0; i < length; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')  count[s[i] - 'A']++;
            if(s[i] >= 'a' && s[i] <= 'z')  count[s[i]- 'a']++;
        }
        priority_queue< long long, vector<long long>,  less<long long> > q;
        for(int i = 0 ; i < 26; i++)
        {
            if(count[i]!=0) q.push(count[i]);
        }
      
        long long sum=0,first;
        if(k >= s.size())   cout << 0 << endl;
        else
        {
            while (k--)
        {
            first=q.top();
            q.pop();
            first -= 1;
            q.push(first);
        }
        while(q.size() > 0){
            sum = sum + q.top()*q.top();
            q.pop();
        }
       cout << sum << endl;
    }
}
    
}
