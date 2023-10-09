#include<iostream>

#define ll long long int
 
using namespace std;

int main()  {

    ll n, q;

    scanf("%lld %lld", &n, &q);

    ll arr[n], pre[n];

    for (ll i = 0; i < n; i++)  {

        scanf("%lld", &arr[i]);

    }
        
    pre[0] = arr[0];

    for (ll i = 1; i < n; i++)  {

        pre[i] = pre[i - 1] + arr[i];

    }
        
    ll a, b;

    for (ll i = 0; i < q; i++)  {

        scanf("%lld %lld", &a, &b);

        if (a != 1) {

            printf("%lld \n", pre[b - 1] - pre[a - 2]);

        }   else    {

            printf("%lld \n", pre[b - 1]);

        }

    }
    
}
