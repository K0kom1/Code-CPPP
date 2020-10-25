#include<bits/stdc++.h>
using namespace std;
struct sv{
	int nums;
	char name[50];
	float p[3];
} ss[100];

void addnew(int n){
	FILE *outfile=fopen("Ha053.bin","ab");
	int c=count();

}
int main()
{
	int n;
	cin >> n;
	switch(n){
		case 1:
            cin >> n;
			addnew(n);
			cout << n;
			break;
		case 2:
            cin >> n;
			break;
			
		case 3:
			break;
	}

	return 0 ;
}
