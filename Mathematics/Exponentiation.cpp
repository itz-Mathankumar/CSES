#include<iostream>

#include<math.h>

#define ll long long int

const unsigned int M = 1000000007;
 
using namespace std;

int main()  {

    ll n;

	cin>>n;

	while(n--)  {

		ll a, b;

		cin>>a>>b;

		if(a == 0 && b == 0)    {

			cout<<1;

		}   else if(a == 0 || b == 0)   {

			cout<<pow(a, b);

		}   else    {

		    a = a % M;

		    b = b % M;

		    ll result = 1;

            while (b > 0)   {

            if((b & 1) % M == 1)  {

                a = a % M;

                result = result % M;

                result = ( result * a ) % M;

        }

        a = ( a * a ) % M;

        b = ( b >> 1 ) % M; 

      }	

      cout<<result % M;

	}

	cout<<endl;

  }
    
}
