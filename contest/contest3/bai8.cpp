#include<iostream>
#include<vector>
using namespace std;
vector<int> start;
vector<int> finish;
int n;
int act()
{
    int dem = 1,mark=0;
    
    for(int i = 1; i < n; i++)
    {
        if(start[i] >= finish[mark] && start[i] <= finish[i])
        {
            dem++;
            mark = i;
        }
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> temp;
            start.push_back(temp);
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> temp;
            finish.push_back(temp);
        }
        for(int i = 0 ; i < n-1 ; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(finish[i] > finish[j])
                {
                    swap(start[i],start[j]);
                    swap(finish[i],finish[j]);
                }
            }
        }       
        cout << act() << endl;
        start.clear();
        finish.clear();
    }
}