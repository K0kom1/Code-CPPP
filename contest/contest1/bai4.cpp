#include<iostream>
#include<string>
using namespace std;
int n,check = 0;
char  x[30];

void display(){
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}

void khoitao(){
    for(int i = 1; i <= n; i++)
        x[i] = 'A';
}

void next_binary()
{
    int i = n;
    while (x[i] == 'B') i--;
    if(i == 0)  check = true;
    else
    {
        x[i] = 'B';
        for(int j = i+1; j <= n; j++)
            x[j] = 'A';
    }
}

main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        khoitao();
        while (!check)
        {
            display();
            next_binary();
        }
        cout << endl;
        check = false;
    }

}
