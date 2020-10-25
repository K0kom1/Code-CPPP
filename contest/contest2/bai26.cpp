#include<iostream>

using namespace std;
string s;
int k,dodai;
bool check;
void back_track(int i)
{
    char max = s[dodai-1];
    int vitri;
    if(check == true)   return;
    for(int j = i+1; j < dodai && k > 0; j++)
    {
         if(k == 0){
             check = true;
             break;
         }
        if(s[j] >= max) 
        {
            max = s[j];
            vitri = j;
        }
    }
    if(max > s[i] && k > 0)
    {
        swap(s[i],s[vitri]);
        k--;
    }

    if(i == dodai - 1)   return;
    else                back_track(i+1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> s;
        check = false;
        dodai = s.length();
        back_track(0);
        cout << s << endl;
    }
    
}
