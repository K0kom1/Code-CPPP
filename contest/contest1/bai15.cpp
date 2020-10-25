#include<iostream>

using namespace std;
string sx;
void next_permutation()
{
    int i = sx.length() - 2;
    while(sx[i] >= sx[i+1])    i--;
    if(i < 0)   cout << "BIGGEST";
    else
    {
        int k = sx.length() - 1;
        while(sx[k] <= sx[i])  k--;
        swap(sx[k], sx[i]);
        int d = i + 1, m = sx.length()-1;
        while (d < m)
        {
            swap(sx[d], sx[m]);
            d++; m--;
        }
        cout << sx;  
    }
}
int main()
{
    int t,id;
    cin >> t;
    while (t--)
    { 
        cin >> id >> sx;
        cout << id << " ";
        next_permutation();
        cout << endl;
    }
    return 0;
}
