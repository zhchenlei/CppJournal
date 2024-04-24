//abcd12345ed125ss123058789
//123058789

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,substr;
    string maxSubStr;
    cin>>s;
    auto it = s.begin();
    while(it!=s.end())
    {
        if(*it >= '0' && *it <= '9')
        {
            substr.push_back(*it);
            if(max(maxSubStr.size(),substr.size()) > maxSubStr.size() )
            {
                string tmp(it-substr.size()+1,it+1);
                maxSubStr = tmp;
            }
        } 
        else 
        {
            substr.clear();
        }
        ++it;
    }
    cout<<maxSubStr<<endl;
    return 0;
}