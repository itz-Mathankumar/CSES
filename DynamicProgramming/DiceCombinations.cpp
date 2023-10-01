#include<iostream>

#include<cstring>
 
#define ll long long int

const unsigned int M = 1000000007;

#define MAXN 1000001

int DP[MAXN];

using namespace std;

int compute (int left) {

    if (DP[left] != 0) {

        return DP[left];

    }

    for (int i = 1; i <= 6; i++) {

        if (left - i >= 0) {

            DP[left] += compute(left - i);

            DP[left] %= M;

        }

    }

    return DP[left];
    
}

int main()
{
 
    ll n;
 
    cin>>n;

    memset(DP, 0, sizeof(DP));

    DP[0] = 1;

    cout << compute(n) << endl;
 
}
