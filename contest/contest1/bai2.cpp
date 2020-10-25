#include<iostream>

using namespace std;
int mt[1000],n,k;
void next_combination(){
    int i = k;
    while(mt[i] == n - k + i) i--;
    if(i == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        mt[i]++;
        for(int j = i+1; j <= k; j++)
            mt[j] = mt[j-1] + 1;
        for (int m = 1; m <= k; m++)
        {
            cout << mt[m] << " ";
        }
            
    }
    cout << endl;

}
int main()
{   
    
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> mt[i];
        }
        next_combination();
    }

    return 0;

}
