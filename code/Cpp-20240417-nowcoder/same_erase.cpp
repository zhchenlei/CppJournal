/*https://www.nowcoder.com/practice/8d3643ec29654cf8908b5cf3a0479fd5?tpId=308&tqId=40462&ru=/exam/oj
点击消除:
题目描述：牛牛拿到了一个字符串。
他每次“点击”，可以把字符串中相邻两个相同字母消除，例如，字符串"abbc"点击后可以生成"ac"。
但相同而不相邻、不相同的相邻字母都是不可以被消除的。
牛牛想把字符串变得尽可能短。他想知道，当他点击了足够多次之后，字符串的最终形态是什么？
输入描述：一个字符串，仅由小写字母组成。（字符串长度不大于300000）
输出描述：一个字符串，为“点击消除”后的最终形态。若最终的字符串为空串，则输出0。
*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s, st;
    while(cin>>s)
    {
        for(char ch : s)
        {
            if(st.size()!= 0 && ch == st.back())  st.pop_back();
            else st.push_back(ch);
        }
        if(!st.empty()) cout<<st<<endl;
        else cout << 0 << endl;
    }    
    return 0;
}


//超时 7/8
/*
string same_erase(string& s)
{
    int flag = 0;
    for(int cur = 1; cur < s.size(); cur++)
    {
        if(s[cur] == s[cur - 1])
        {
            s.erase(s.begin() + cur - 1, s.begin() + cur + 1);
            flag = 1;
        }
    }
        if(flag == 0) return s;
        return same_erase(s);
    }
    int main() 
    {
        string s;
        while (cin >> s)
        {
            same_erase(s);
            if(!s.empty()) cout<<s<<endl;
            else cout << 0 << endl;
    }
}
*/