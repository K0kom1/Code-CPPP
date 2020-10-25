#include<iostream>
using namespace std;
int x[1000],n,M,Max=-1;
int weight,value;
int w[100],v[100],res[100];
void kiemtra(int ,int );
void Try(int i)
{
	for (int j = 0; j <= 1; j++ )
		{
		x[i] = j;
		weight += x[i]*w[i];
		value += x[i]*v[i];
		if (i == n) kiemtra(weight,value);
			else Try(i+1);
		weight -= x[i]*w[i];
		value -= x[i]*v[i];	
		}
}

void kiemtra(int k,int z){
	for (int i=1;i<=n;i++)
		cout << x[i] << " ";
	cout << "tong gia tri la: "<<z;
	if(k <= M)
	 	if (z > Max) {
		Max = z;
	for (int i=1; i<=n;i++){
		res[i] = x[i];
	
	}
	}
	
	else;
	else cout << "rach tui";
	cout << endl;
	
}
int main()
	{
		cin >> n >> M;
		for (int i=1;i<=n;i++) cin >> w[i] >> v[i];
		
		Try(1);
		cout << Max << endl;
		for (int i=1; i<=n;i++)
			cout <<res[i]<<" " ;
		
	}
