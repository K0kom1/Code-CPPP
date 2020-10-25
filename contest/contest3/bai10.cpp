#include<iostream>
#include<queue>
using namespace std;
//// Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>> g = gq;
long long n,OPT;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        OPT = 0;
        priority_queue< int,vector<int> , greater<int> > q; 
        int temp,first,second;
        for(int i = 0; i < n; i++){
            cin >> temp;
            q.push(temp);
        }
        while(q.size() >  1)
        {
            first = q.top();
            q.pop();
            second = q.top();
            q.pop();
            OPT += first + second;
            q.push(first + second); 
        }
        cout << OPT << endl;
    }
    
}
