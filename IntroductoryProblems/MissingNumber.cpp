#include<iostream>
 
#include<numeric>
 
#define ll long long int
 
using namespace std;
 
int main()
{
 
    ll n;
 
    cin>>n;
 
    ll arr[n-1];
 
    ll sum = 0;
 
    for(ll i=0;i<n-1;i++)
    {
 
        cin>>arr[i];
 
        sum+=arr[i];
 
    }
 
    cout<<((n*(n+1))/2) - sum;
 
    return 0;
 
}
