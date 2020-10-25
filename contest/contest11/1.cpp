#include <bits/stdc++.h> 
using namespace std; 
string Tinh(string s) 
{ 
    stack<string> st; 
    for (int i=0; i<s.length(); i++) 
    {  
        if (isalpha(s[i])) 
        { 
        
           //string op(1, s[i]); 
           string op ="";
           op += s[i];
           
           st.push(op); 
        }
        else
        { 
            string a = st.top(); st.pop(); 
            string b = st.top(); st.pop(); 
            string tmp= b+" "+s[i] +" "+a;
            st.push(tmp); 
        } 
    }  
    return st.top(); 
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
    	cout << Tinh(s);
    	cout<<endl;
	}
}
