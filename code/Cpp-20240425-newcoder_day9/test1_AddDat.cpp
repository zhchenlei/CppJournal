#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
using namespace std;

int main() 
{
    string s;
    while (cin >> s) 
    {
        int i = 0;
        auto it = s.begin();
        reverse(s.begin(), s.end());
        while(it != s.end())
        {
            if(++i%3 == 0 && i < s.size())
            {
                s.insert(it+1, ',');
                it++;
            }
            it++;
        }
        reverse(s.begin(), s.end());
        if(*s.begin() == ',') s.erase(s.begin());
        cout<<s<<endl;

    }
}