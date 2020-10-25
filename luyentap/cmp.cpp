#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;


typedef struct{
	string name;
	int age;
	string address;
} Class;

bool cmp(Class x, Class y){
	return x.age < y.age;
}


int main(){
	Class a[7];
	for(int i=1;i<=6;i++){ // nhap vao
	cin.ignore();
	cin >> a[i].name >> a[i].age >> a[i].address;
	
	}
	sort(a+1,a+7,cmp);
	for(int i=1;i<=6;i++) // in ra
	cout << a[i].name<<" " << a[i].address <<" "<< a[i].age << endl;
	
	return 0;
}
// Sap xep day so tang dan(a[i] < 10 mu 256) 
	
