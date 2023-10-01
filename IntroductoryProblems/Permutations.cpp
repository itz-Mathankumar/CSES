#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{
 
    ll n;
 
    cin>>n;
 
    if(n==2 || n==3)
    {
 
        cout<<"NO SOLUTION";
 
    }
    else
    {
 
        for(ll i=2;i<=n;i+=2) cout<<i<<" ";
 
        for(ll i=1;i<=n;i+=2) cout<<i<<" ";
 
	}
 
}
