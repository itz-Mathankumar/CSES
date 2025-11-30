#include<iostream>

#include<cstring>

#include<vector>

#include<unordered_set>

#define ll long long int

const unsigned int M = 1000000007;

using namespace std;

int main()
{
 
    string s;
    
    cin>>s;
       
    int k;
    
    cin>>k; 
    
    int n = s.size();

    unordered_set<string> dictionary;

    int maxWordLength = 0;
    
    for (int i = 0; i < k; ++i)
    {

        string word;

        cin>>word;

        dictionary.insert(word);

        maxWordLength = max(maxWordLength, (int)word.size());

    }

    vector<ll> dp(n + 1, 0);

    dp[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        
        if (dp[i] == 0)
        {

            continue;

        }

        for (int length = 1; length <= maxWordLength && i + length <= n; length++)
        {
            
            string sub = s.substr(i, length);

            if(dictionary.find(sub) != dictionary.end())
            {

                dp[i + length] = (dp[i + length] + dp[i]) % M;

            }

        }
        
    }
    
    cout<<dp[n];

    return 0;

}
