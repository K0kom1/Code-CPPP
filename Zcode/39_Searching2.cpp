#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x) {
  int r = n - 1; // chỉ số phần tử cuối
  int l = 0; // Chỉ số phần tử đầu tiên
  while (r >= l) {
    int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn
 
    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (arr[mid] == x)
      return 1;
 
    // Nếu arr[mid] > x, cập nhật lại right
    if (arr[mid] > x)
      r = mid - 1;
    // Nếu arr[mid] < x, cập nhật lại left
    if (arr[mid] < x)
      l = mid + 1;
  }
 
  // Nếu không tìm thấy
  return -1;
}
void Searching() {
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];   
    cout << binarySearch(a,n,x) << endl;
    cout << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        Searching();
    }
    return 0;
}