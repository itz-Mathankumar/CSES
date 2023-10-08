#include<iostream>
 
#include<algorithm>

#include<vector>

#define ll long long int
 
using namespace std;

int main()  {
    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> c(n), a(m);

    for (ll i = 0; i < n; i++) {

        cin >> c[i];

    }

    for (ll i = 0; i < m; i++) {

        cin >> a[i];

    }

    sort(c.begin(), c.end());

    sort(a.begin(), a.end());

    ll ans = 0, count = 0;

    for (ll i = 0; i < n; i++) {

        while (count < m) {

            if (a[count] + k < c[i]) {

                count++;

            } else if (a[count] - k > c[i]) {

                break;

            }   else    {

                count++;

                ans++;

                break;

            }

        }

    }

    cout << ans;
    
}
