/**852.山峰数组的峰顶
 * 符合下列属性的数组 arr 称为 山脉数组 ：
arr.length >= 3
存在 i（0 < i < arr.length - 1）使得：
arr[0] < arr[1] < ... arr[i-1] < arr[i] 
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
给你由整数组成的山脉数组 arr ，返回满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。

你必须设计并实现时间复杂度为 O(log(n)) 的解决方案。
*/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int left = 1, right = arr.size() - 2;
        while(left < right)
        {
            int mid = left + (right - left + 1)/2;
            if(arr[mid] > arr[mid - 1]) left = mid;
            else right = mid - 1; 
        }
        return left;
    }
};