#include<iostream>
#include<string.h>

using namespace std;
string x;

void next_binary()
{
    for(int i = x.length() - 1; i >= 0; i--)
    {
        if(x[i] == '1') x[i] = '0';
        else{
            x[i] = '1';
            break;
        }
    }

}

int main(){
    int t;
	cin >> t;
	while(t--){
		cin >> x;
		next_binary();
		cout << x << endl;
	}
}
