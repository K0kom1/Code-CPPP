#include<iostream>

using namespace std;
int n,x[12],check = 0;
void display()
{
    for (int  i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}
void next_permutation_reverse(){
    int i = n - 1;
    for(i = n - 1; i > 0; i-- )
    {
        if(x[i] > x[i+1])   break;
    }
    if(i == 0)    check = 1;
    else
    {
        int k = n;
        while(x[k] > x[i])  k--;
        swap(x[i],x[k]);
       	int d = i + 1, m = n;
       	while(d < m)
       	{
       		int temp = x[d];
			   x[d] = x[m];
			   x[m]=temp;
			   d++;
			   m--;	
         }   
    }
}
void khoitao()
{
    for(int i = 1; i <= n; i++)
        x[i] = n - i + 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        khoitao();
        while(!check)
        {
            display();
            next_permutation_reverse();
        }
        cout << endl;
        check = 0;
    }
    return 0;
}
