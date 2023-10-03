#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{
    ll n;

    cin>>n;
 
    for(ll x=1;x<=n;x++)
    
    {

        cout<<((x*x)*(x*x-1)/2)-(4*(x-1)*(x-2));
    
        cout << endl;

    }
 
}
