#include<iostream>

#define ll long long int

using namespace std;

int main()
{

    ll n;

    cin>>n;

    cout<<n<<" ";

    while(n>1)
    {

        n = n%2==0 ? n/2 : (3*n)+1 ;

        cout<<n<<" ";

    }

    cout<<'\n';

    return 0;
    
}
