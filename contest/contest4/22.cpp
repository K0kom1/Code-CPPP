#include<bits/stdc++.h>

using namespace std;
int n, k;

int binary_search(vector<int> a, int n, int k)
{
    int left = 0 , right = n-1;
    while(left <= right)
    {
        int middle = (left + right)/2;
        if(a[middle] == k)
        {
            return middle;
            break;
        }  
       else if(k < a[middle] )
        right = middle -1;
        else    left = middle+1;
    }
    return -1;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a;
        int temp;
        for(int i  = 0 ; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
      
    if (binary_search(a, n, k) >= 0)    
		 cout << binary_search(a, n, k) + 1 << endl;
    else cout << "NO" << endl;
        
    }
    
}
