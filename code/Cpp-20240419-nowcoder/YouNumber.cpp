/*
    *3
    *1 1 1第一次询问，可以拼出"you"，获得2分。
    *2 3 2第二次询问，可以拼出"oyouyou"，获得4分。yyooouu
    *1 5 2第三次询问，可以拼出"uooooyou"，获得5分
*/
    /**
     * 通过
     * 不支持变长数组如何处理
    */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 0;
    while(cin>>n)
    {
        vector<vector<int>> a(n,{0,0,0});
        //for(int i = 0; i < n; i++) a[i][3] = {0};
        //输入矩阵
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin>>a[i][j];
            }
        }
    
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            int m = 00;
            if(a[i][0] == a[i][1] && a[i][1] == a[i][2]) m = a[i][0];
            else
            {
                m = min(a[i][0], a[i][1]);  
                m = min(a[i][2], m);
            }
            for(int j = 0; j < m; j++) count += 2; //you
            //cout<<count<<"\t"<<m<<"\t"<<a[i][1]<<"\t";
            a[i][1] -= m;
            if(a[i][1]!=0) count += (a[i][1] -1);
           // cout<<a[i][1]<<"\t";
            cout << count << endl;
        } 
    }
    return 0;
}