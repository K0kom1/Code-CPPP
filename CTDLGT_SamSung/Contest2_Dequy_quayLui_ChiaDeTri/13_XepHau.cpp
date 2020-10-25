#include<bits/stdc++.h>
#define n 8
using namespace std;

int a[n+1][n+1], maxx=0;
int cot[n+1],DB_TN[2*n+1], DN_TB[2*n+1];
int x[n+1];

void tinh_diem(){
	int sum=0;
	for (int i=1; i<=n; i++)
		sum+=a[i][x[i]];
	if (sum > maxx) maxx=sum;
	return;
}

void try1(int i){				//thử các cách đạt quân hậu thứ i vào hàng i
	for (int j=1; j <= n; j++){
		if (cot[j] && DB_TN[i+j] && DN_TB[i-j+n]){		//Nếu vị trí [i,j] chưa bị khống chế
			x[i]=j;			// thử đặt quân hậu i vào cột j
			if (i == n) tinh_diem();
			else{
				cot[j]=0;  DB_TN[i+j]=0; DN_TB[i-j+n]=0;   // Đánh dấu đã chọn
				try1(i+1);
				cot[j]=1;  DB_TN[i+j]=1; DN_TB[i-j+n]=1;   // Bỏ đánh dấu
			}
		}
	}
	return;
}
int main()
{
	int test;
	cin >> test;
	while(test--){
		for (int i=1; i <= n; i++)
			for (int j=1; j <= n; j++)
				cin >> a[i][j];
		for (int i=1; i <= n; i++) cot[i]=1;
		for (int i=1; i <= 2*n; i++){
			DB_TN[i]=1;
			DN_TB[i]=1;
		}
		try1(1); 	
		cout << maxx << endl;
	}

	return 0 ;
}

