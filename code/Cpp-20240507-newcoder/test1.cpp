/**     攻击力  血量  
 * 对立   a      h
 * 光     b      k
 * 光—攻击——>对立-攻击
 * ——>(小红血-攻击力)+幻术(同时互相攻击)
 * ==>如果一人血量=0，另一人攻击*10+自杀
 * ==>同时死亡
*/

#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     long long a = 0, h = 0;
//     long long b = 0, k = 0;
//     while(cin>>a>>h>>b>>k)
//     {
//         long long reboss = 0;
//         while (h>0 || k>0)
//         {
//             //如果有人死了
//             if(k <= 0 || h <= 0)
//             {
//                 //有2个人死了
//                 if(k <= 0 && h <= 0){}
//                 else
//                 {
//                     if(k <= 0) reboss += 10*a;
//                     if(h <= 0) reboss += 10*b;
//                 }
//                 h = 0, k = 0;
//                 break;
//             }
//             else
//                 reboss += (b+a);
//             //幻术攻击
//             h -= b;
//             k -= a;
//         }
//         cout<<reboss<<endl;
//     } 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

string addstri(string a, string b)
{
    string c;
    //"123456789"
    //"9876543210"
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int next = 0;
    for(int i = 0;)

    return c;
}

int main()
{
    //long long a = 0, h = 0;
    //long long b = 0, k = 0;
    string a,h,b,k;
    while(cin>>a>>h>>b>>k)
    {
        //long long reboss = 0;
        string reboss(0);
        //while (h>0 || k>0)
        while(!h.empty() || !k.empty())
        {
            //如果有人死了
            //if(k <= 0 || h <= 0)
            if(k.empty() || h.empty())
            {
                //有2个人死了
                //if(k <= 0 && h <= 0){}
                if(h.empty()&&h.empty()){}
                else
                {
                    //if(k <= 0) reboss += 10*a;
                    if(k.empty()) reboss += 10*a;
                    if(h <= 0) reboss += 10*b;
                }
                h = 0, k = 0;
                break;
            }
            else
                reboss += (b+a);
            //幻术攻击
            h -= b;
            k -= a;
        }
        cout<<reboss<<endl;
    } 
    return 0;
}


/**
 * ==>53.7%
 * long long ==>91.7
*/