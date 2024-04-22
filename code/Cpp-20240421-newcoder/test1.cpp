#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s("1234567");
    cout << s<<endl;
    reverse(s.begin(),s.end());
    s.push_back(9+'0');
    s.push_back(9+'0');
    s.push_back(9+'0');
    cout << s << endl;
    return 0;
}