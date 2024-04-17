
/*数字统计：
2 100 ->20
请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，
在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现
了6次。*/

#include <iostream>
using namespace std;
int main()
{
    int l, r;
    while (cin >> l >> r)
    {
        int count = 0;
        for(; l <= r; l++)
    {
        int n = l;
        while(n)
        {
            if(n == 2 || n % 10 == 2)
            {
             ++count;
            }
                n /= 10;
            }
        }
        cout<< count <<endl;
    }
    return 0;
}
