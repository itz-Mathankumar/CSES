#include<iostream>
 
#define ll long long int
 
using namespace std;
 
int main()
{

    ll n;

    cin>>n;
    
    ll sum=(n*(n+1))/2;

    if(sum%2!=0)    {

        cout<<"NO";

    }   else    {

        cout<<"YES"<<endl;

        ll i,j,sum1=0;

        cout<<n/2<<endl;

        for(i=n,j=1;i>j;)   {

            sum1+=i;

            cout<<i<<" ";

            i--;

            if(sum1==sum/2) {

                break;

            }

            cout<<j<<" ";

            sum1+=j;

            j++;

            if(sum1==sum/2) {

                break;

            }

        }

        cout<<endl;

        if(n%2!=0)  {

            cout<<(n/2)+(1);

        }   else    {

            cout<<n/2;

        }

        cout<<endl;

        for(;i>j;)  {

            cout<<i<<" ";

            i--;

            cout<<j<<" ";

            j++;

        }

    }
 
}
