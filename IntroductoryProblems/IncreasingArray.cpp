#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{
 
    ll n;
 
    cin>>n;
 
    ll arr[n];
 
    for(ll i=0;i<n;i++)
    {
 
        cin>>arr[i];
 
    }
 
    ll moves = 0;
 
    for(ll i=1;i<n;i++)
    {
 
        if(arr[i-1]>arr[i])
        {
 
            moves += arr[i-1] - arr[i];
 
            arr[i] = arr[i-1];
 
        }
 
    }
 
    cout<<moves;
 
}
