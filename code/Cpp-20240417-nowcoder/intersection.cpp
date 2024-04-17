/*
两个数组的交集
示例2
输入：[1,2,3],[8,2,2,3,8]
输出：[2,3]
说明：两个数组的公共元素为2和3，返回[3,2]也是一个正确的答案
*/


#include<bits\stdc++.h>
class Solution
{
public:
/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
*
*
* @param nums1 int整型vector
* @param nums2 int整型vector
* @return int整型vector
*/
vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
vector<int> ret;
set<int> s1(nums1.begin(),nums1.end());
set<int> s2(nums2.begin(),nums2.end());
auto it1 = s1.begin();
while(it1 != s1.end())
{
auto it2 = s2.begin();
while(it2 != s2.end())
{
if(*it1 == *it2)
{
ret.push_back(*it1);
break;
}
if(*it1 < *it2) break; //优化
++it2;
// cout<<*it2<<" "<<endl;
}
// cout<<*it1<<" "<<endl;
++it1;
}
return ret;
}
};
