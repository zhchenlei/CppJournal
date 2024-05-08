#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0;
	cin >> t;   //t 个 测试用例
	while(t-- > 0)
	{
	    int n = 0;  //n 个腿
	    int x = 0; //x个动物
	    cin>>n;
	    if(n % 4 != 0) 
	    {
	        x++; 
	        n -= 2;
	    }
	    x += n / 4; //牛的个数
	    cout<<x<<endl;
	}
	return 0;
}
