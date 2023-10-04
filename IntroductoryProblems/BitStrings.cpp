#include<iostream>
 
#define ll long long int

const unsigned int M = 1000000007;

using namespace std;

int main()
{
 
    ll n;

    cin>>n;
    
    ll ans=2;
    
    while(n>1)  {
        
        ans=ans*2;
        
        ans%=M;
        
        n--;

    }

    cout<<ans;
 
}
