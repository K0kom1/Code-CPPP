#include<iostream>

using namespace std;
int n,mt[20],k,check = 0;
void display(){
    for(int i = 1; i <= k; i++)
    {
        cout << mt[i];
    }
    cout << " ";
}
void next_combination()
{
    int i = k;
    while(mt[i] == n - k + i)    i--;
    if(i == 0)  check = 1;
    else
    {
        mt[i]++;
        for(int j = i+1; j <=k; j++)
            mt[j] = mt[j-1] + 1;    
    }
}
void khoitao()
{
    for(int i = 1; i <=k; i++)
        mt[i] = i;
}
int main()
{   
    int t;
    cin >> t;
    while (t--)
    {	
    	
        cin >> n >> k;
        khoitao();
        while (!check)
        {
            display();
            next_combination();
        }
        cout << endl;
        check = 0;
    }
    
    return 0;

}
