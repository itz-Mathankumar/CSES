#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{
 
    string s;
 
    cin>>s;
 
    ll length = s.length();
 
    ll repeat = 1;
 
    ll maxLength = 1;
 
    for(ll i=1;i<=length;i++)
    {
 
        if(s[i-1]==s[i])
        {
 
            repeat+=1;
 
        }
        else
        {
 
            maxLength = max(maxLength,repeat);
 
            repeat=1;
 
        }
 
    }
 
    cout<<maxLength;
 
 
}
