#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	do{
		cin >>s;
		if(s=="#") break;
		int demY=0,demA=0,demN=0;
		int sum=s.length();
		for(int i=0;i<sum;i++)
			{
				switch(s[i]){
					case 'Y':{
						demY++;
						break;
					}
					case 'A':{
						demA++;
						break;
					}
					case 'N':{
						demN++;
						break;
					}
				}
				
			}
		int x = sum/2;
		if(sum&1) x++;	
		if (demA>=x) cout <<"need quorum";
		else if(demN>demY) cout <<"no";
				else if(demN<demY) cout <<"yes";
					else cout << "tie";
		cout <<endl;				
	}while(s!="#"); 
	return 0;
}

