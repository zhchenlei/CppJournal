#include <bits/stdc++.h>
using namespace std;

/*
 * 一个数组A包含n个整数
 * 可以任意排序
 * 找到在这些交替数和中的最大数
 输入：
 * 第一行输入 t 组测试样例
 * 每个样例2行
 ** 数组a的长度 N
 ** 数组N的元素
 输出：
 * 最大的交替数
 */
int main() {
	int t = 0;
	cin >> t;
	int ret = 0;
	//t组样例
	while(t-- > 0)
	{
	    int n = 0;
	    int sum = 0;
	    cin >> n;
	    vector<int> a(n,0);
	    for(int i = 0; i < n; i++)
        {
            int tmp = 0;
            cin>>tmp;
            if(i % 2 != 0)  a[i] = -tmp; //偶数变负数
            cout<<a[i]<<"->";
        }
        cout<<endl;
        //sort(a.begin(),a.end());
        //正数和
        for(auto e : a)
        {
           sum += e;
        }
        cout<< sum <<endl;
        ret += sum;
	}
	cout<< ret <<endl;
    return 0;
}
