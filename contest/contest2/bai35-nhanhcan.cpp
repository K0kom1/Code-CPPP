#include<iostream>

using namespace std;
int n,k,sum,c[100],dem,s;

void back_track_combination(int j)
{
    for(int i = c[j-1] + 1; i <= n - k + j; i++)
        {
            c[j] = i;
            sum += i;
            if(j == k && sum == s)  dem++;
            else if(sum < s && j < k)    back_track_combination(j+1);
            sum -= i; 
        }
}
void back_track(int i)
{
	
	for(int j = c[i-1] + 1; j <= n - k + i; j++)
	{
		c[i] = j;
		sum = sum + j;
		if(i == k && sum == s)	dem++;
		else if(i < k && sum < s)		back_track(i+1);
		sum -= j;
	}
} 
int main()
{
    while (1)
    {
    cin >> n >> k >> s;
    if(n == 0 && k == 0 && s == 0)  break;
    dem = 0;
    sum = 0;
    back_track(1);
    cout << dem << endl;
    }
}
