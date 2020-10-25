#include<bits/stdc++.h> 
using namespace std;
int a,b,c,d;
int xe(){
    if( a==c || b==d )
        return 1;
     return 2;
}
int tuong() {
   if ( a-b == c-d )
        return 1;
 
    if(a+b == c+d)
      return 1;
 
 
    if ((a+b)%2 == (c+d)%2)
        return 2 ;
 
    return 0 ;
 
}
 
int vua() {
  return max(abs(a-c),abs(b-d)) ;
 
}
 
int main()
{
    cin>>a>>b>>c>>d ;
    cout<<xe()<<" " <<tuong() <<" " << vua() <<endl ;
    return 0;
}

