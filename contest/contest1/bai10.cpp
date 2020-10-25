#include<iostream>

using namespace std;
string b,gt;

 
void convert_binary_to_gray()
{gt[0] = b[0];    
for (int i = b.length() - 1; i > 0; i--)
    {
        if(b[i] != b[i-1])  gt[i] = '1';
        else                gt[i] = '0';
    }
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> b;
        gt=b;
        convert_binary_to_gray();
        cout << gt << endl;
    }
}
