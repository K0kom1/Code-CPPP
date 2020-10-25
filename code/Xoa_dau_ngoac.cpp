#include<bits/stdc++.h>
using namespace std ;
int n, x[105],mo[105],dong[105],m;    // mo[i]: vị trí dấu '(' thứ i
									// dong[i]: vị trí dấu ')' tương ứng với mo[i]
string st ;

vector <bool> check (201,true) ; 

int in(int k){
//	memset(check, true , sizeof(check));
	for ( int i=0; i<n ; i++) check[i]=true;
	for (int i=1; i<=k; i++)
	{
		check[mo[x[i]]]=false ;
		check[dong[x[i]]]=false ;
	}
    for (int i=0; i<n; i++)
        if (check[i]) cout << st[i];
    cout << endl ;
    return 0;
}
int try_QL(int i,int k){
	for (int v=x[i-1]+1; v<=m-k+i; v++)  	// mọi giá trị có thể gán cho x[i]
	{
		x[i]=v;								// x[i] là cặp ngoặc thứ i trong tổng m cặp ngoặc
		if(i == k) in(k);					// cấu hình đủ k cặp ngoặc trog tổng m cặp ngoặc
		else
			try_QL(i+1,k);
	}
}

int main(){    
    stack <int> s;
    cin>>st ;
    n=st.length();
    for (int i=0 ; i<=n ; i++)
    {
		if(st[i]=='(')
		{
			s.push(i) ;
		} 
		else 
			if (st[i]==')')
			{
				dong[++m]=i ;
				mo[m]=s.top();
				s.pop();
			}
    }
    for (int i=1 ; i<=m ; i++ )
   		try_QL(1,i);
	return 0 ;
}
