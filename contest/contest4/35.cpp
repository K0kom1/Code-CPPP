#include <bits/stdc++.h>

using namespace std;

int maxSubArray(int [], int, int);

int main() 
{
    int test;
    cin >> test;
    while(test--)
	{
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << maxSubArray(arr, 0,  n - 1) << endl;
    }
    return 0;
}

int maxSubArray(int arr[], int left, int right)
{
    if(left == right)
        return arr[left];
    
    int mid = (left + right) / 2;
    
    int Max_Left = maxSubArray(arr, left, mid);
    int Max_Right = maxSubArray(arr, mid + 1, right);
    
    int leftsum = INT_MIN;
    int rightsum = INT_MIN;
    int sum = 0;
    for(int i = mid; i >= 0; i--)
	{
        sum += arr[i];
        leftsum = max(leftsum, sum);
    }
    sum = 0;
    for(int i = mid + 1; i <= right; i++)
	{
        sum += arr[i];
        rightsum = max(rightsum, sum);
    }
    return max(max(Max_Left, Max_Right), leftsum + rightsum);
}
