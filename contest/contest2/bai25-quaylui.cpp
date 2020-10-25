#include<iostream>
using namespace std;
int p[100],n,tong,mot_nua,sum;
bool kt[100],check;
void back_track_permutation(int k)
{
    if(check == true)  return;
    for(int i = 1; i <= n ; i++)
    {
        if(kt[i])
        {
            sum+=p[i];
            kt[i] = false;
            if(sum == mot_nua)
			{
                check = true;
                break;
            }
            if(sum < mot_nua)   back_track_permutation(k+1);
            kt[i] = true;
            sum -= p[i];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        tong = 0;
        sum = 0;
        check = false;
        for(int i =1; i <= n; i++)
        {
            cin >> p[i];
            tong += p[i];
            kt[i] = true;
        }
        mot_nua = tong / 2;
        if(tong % 2 != 0)   cout << "NO" << endl;
        else
        {
            back_track_permutation(1);
            if(check == true)   cout << "YES" << endl;
            else    cout << "NO" << endl;
        }
    }  
}
