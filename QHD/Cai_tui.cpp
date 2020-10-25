/* 
Gọi f[i,j] là gía trị lớn nhất có thể có bằng cách chọn các gói 
từ [1,2,...,i] với giới hạn tọng lượng là j.
Công thức truy hồi:
- Nếu ko chọn gói thứ i: f[i,j] = f[i-1,j]
- Nếu chọn gói thứ i:    f[i,j] = v[i] + f[i-1,j-w[i]]
*/
#include<bits/stdc++.h>
using namespace std;
const int N= 1e6 +9 ;
int n, w[100],v[100] ,M ;   //W[]: mang chua khoi luong
							//v[]: mang chua gia tri

void init()
{
	cin >> n >> M ;
	for ( int i=1; i<=n ; i++ )
		cin >> w[i] >> v[i] ;
}
int main()
{
	init() ;
	static int f[100][100] ;   // f[][]: mang dien co so quy hoach dong.
	for ( int i=1 ; i<=n ; i++ )
		for ( int j=0 ; j<=M ; j++ )   		// tinh f[i,j]
		{
			f[i][j]=f[i-1][j] ;             // Ko chọn túi thứ i
			if ( j>=w[i] && f[i][j] < f[i-1][j-w[i]] + v[i] ) // Điều kiện để chọn túi thứ i
				f[i][j] = f[i-1][j-w[i]] + v[i]  ;
		}
	cout << f[n][M] ;
	return 0 ;
}

