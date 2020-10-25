#include <iostream>
#include<string.h>
using namespace std;
string b, gt;

void convert_gray_to_binary()
{

    for (int i = 0; i < gt.size(); i++)
    {
        if (i == 0)
            b[i] = gt[i];
        else
        {
            if (gt[i] == '1')
            {
                if (b[i - 1] == '0')
                    b[i] == '1';
                else
                    b[i] = '0';
            }
            else
            {
                if (b[i - 1] == '0')
                    b[i] = '0';
                else
                    b[i] = '1';
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> gt;
        b = gt;
        convert_gray_to_binary();
        cout << b << endl;
    }
    return 0;
}
