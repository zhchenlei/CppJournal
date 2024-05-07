/**
 * int 数组[n]
 * 非空连续和最大的子数组
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    while (cin>>n)
    {
        vector<int> a(n,0);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ret = 0;
        for(int left = 0, right = 0; left < a.size();left++)
        {
            int tmp = a[left];
            for(;right < a.size(); right++)
            {
                tmp += a[right];
                ret = max(ret, tmp);
            }
        }
       cout<<ret<<endl;
    }
    return 0;
}