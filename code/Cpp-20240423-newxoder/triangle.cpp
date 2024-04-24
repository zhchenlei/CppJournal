#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> vv(n,{0,0,0,0,0,0});
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cin >> vv[i][j];
        }
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < 6; j++)
            for(int k = j; k < 6; k++)
            {
                for(int l = k; l < 6; l++)
                {
                    if(istriangle(vv[i][j],vv[i][k],vv[i][l]))
                }
            }
    }
    /*for(auto ee : vv)
    {
        for(auto e :ee)
        {
            cout << e<<" ";
        }
        cout<<endl;
    }*/

    return 0;
}