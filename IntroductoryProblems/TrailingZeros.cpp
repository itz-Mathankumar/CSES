#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{
 
    ll n;

    cin>>n;

    ll ans = 0;

    while(n > 0)  {

        ans += n / 5;

        n /= 5;

    }

    cout<<ans;
 
}
