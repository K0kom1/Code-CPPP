#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000],ok=1;

void in(int x){
	for (int i=1; i<=x; i++){
		cout<<a[i];
	}
	cout<<endl;
}

void sinhNhiPhan(){
	int i=n;
	while (a[i]==1 && i>0){
		a[i]=0;
		i--;
	}
	if (i>0) a[i]=1;
	else ok=0;
}

void sinhHoanVi(){
	int i=n-1;
	while (i>0 && a[i]>a[i+1]) i--;
	if (i>0){
		int j=n;
		while (a[i]>a[j]) j--;
		swap (a[i],a[j]);
		sort(a+i+1,a+n+1);
	}
	else ok=0;
}

void sinhToHop(){
	int i=k;
	while (i>0 && a[i]==n-k+i) i--;
	if (i>0){
		a[i]+=1;
		for (int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
	else ok=0;
}

void quayLuiNP(int x){
	for (int i=0; i<=1; i++){
		a[x]=i;
		if (x==n) in(n);
		else quayLuiNP(x+1);
//		a[x]=0;
	}
}

void quayLuiHV(int x){
	for (int i=1; i<=n; i++){
		int c=1;
		for(int j=1; j<=x; j++) if (i==a[j]) c=0;
		if (c){
			a[x]=i;
			if (x==n) in(n);
			else quayLuiHV(x+1);
//			a[x]=0;	
		}
	}
}

void quayLuiTH(int x){
	for(int i=a[x-1]+1; i<=n-k+x; i++){
        a[x]=i;
        if(x==k){
            in(x);
        }
        else{
            quayLuiTH(x+1);
        }
        a[x]=0;
    }
}

int main(){
	int c;
	do{
		cout<<"=============MENU============="<<endl;
		cout<<"1.Sinh nhi phan"<<endl;
		cout<<"2.Sinh hoan vi"<<endl;
		cout<<"3.Sinh to hop"<<endl;
		cout<<"4.Quay lui nhi phan"<<endl;
		cout<<"5.Quay lui hoan vi"<<endl;
		cout<<"6.Quay lui to hop"<<endl;
		cout<<"=============================="<<endl;
		cout<<"Lua chon: "; cin>>c;
	} while (c<1 || c>6);
	if (c==1){
		cout<<"Nhap n: ";
		cin>>n;
		while (ok){
			in(n);
			sinhNhiPhan();
		}
	}
	else if (c==2){
		cout<<"Nhap n: ";
		cin>>n;
		for(int i=1; i<=n; i++) a[i]=i;
		while (ok){
			in(n);
			sinhHoanVi();
		}
	}
	else if (c==3){
		cout<<"Nhap n: ";
		cin>>n;
		cout<<"Nhap k: ";
		cin>>k;
		for(int i=1; i<=k; i++) a[i]=i;
		while (ok){
			in(k);
			sinhToHop();
		}
	}
	else if (c==4){
		cout<<"Nhap n: ";
		cin>>n;;
		quayLuiNP(1);
	}
	else if (c==5){
		cout<<"Nhap n: ";
		cin>>n;
		quayLuiHV(1);
	}
	else if (c==6){
		cout<<"Nhap n: ";
		cin>>n;
		cout<<"Nhap k: ";
		cin>>k;
		quayLuiTH(1);
	}
}

