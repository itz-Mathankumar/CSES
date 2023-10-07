#include<iostream>
 
#include<algorithm>

#include<vector>

#define ll long long int
 
using namespace std;

int main()  {

    int n, ans = 0;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {

        cin >> v[i];

    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {

        if (v[i] != v[i - 1]) {

            ans++;

        }

    }

    cout << ans + 1 << endl;

}
