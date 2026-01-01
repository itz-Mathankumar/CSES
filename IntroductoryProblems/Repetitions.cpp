#include<iostream>
  
int main()
{
    std::string s;
    std::cin>>s;
 
    long length = s.length();
    long repeat = 1;
    long maxLength = 1;
    for(long i = 1; i <= length; i++)
    {
        if(s[i-1] == s[i])
        {
            repeat += 1;
        }
        else
        {
            maxLength = std::max(maxLength,repeat);
            repeat = 1;
        }
    }
 
    std::cout<<maxLength;
}
