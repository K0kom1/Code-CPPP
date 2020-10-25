#include<bits/stdc++.h>
using namespace std ;

long long chuyen(string s){
    long long sum=0 ;
    int mu=0 ;
    for( int i=s.size()-1 ; i>= 0 ; i-- ){
        sum += ( (s[i]-'0')*pow(10,mu) ) ;
        mu++;
    }
    return sum;
}
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL) ;
    int i;
    string s1,s2;
    cin>>s1>>s2;
    for( i=0 ; i<s1.size() ; i++ ){
        if(s1[i]=='6') s1[i]='5';
    }
    for( i=0 ; i<s2.size() ; i++ ){
        if(s2[i]=='6') s2[i]='5';
    }
    cout<<chuyen(s1)+chuyen(s2)<<" ";
    for( i=0 ; i<s1.size() ; i++ ){
        if(s1[i]=='5') s1[i]='6';
    }
    for( i=0 ; i<s2.size() ; i++ ){
        if(s2[i]=='5') s2[i]='6';
    }
    cout<<chuyen(s1)+chuyen(s2);
   
    return 0;
}


