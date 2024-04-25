#include <iostream>
using namespace std;

int stage(int ni ,int n)
{
    if(ni == n ) return 1;
    else if(ni > n) return 0;
    else if(ni < n) return stage(ni+1, n) + stage(ni+2, n);
    return 0;
}

int main() 
{
    int n = 0;
    cin >> n ;
    int ret = stage(0, n);
    cout << ret<<endl;
    return 0;
}