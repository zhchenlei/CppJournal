/**
 * 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
 * 如果数组中不存在目标值 target，返回 [-1, -1]。
 * 你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。
 * https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target) 
    {
        if(n.size()==0) return {-1,-1};
        int left = 0, right = n.size() - 1;
        int begin = 0;
        //1. 查找区间左端点 [right, x) [x, left]
        while(left < right)
        { 
            int mid = left + (right - left)/2;
            if(target > n[mid])    left = mid + 1;
            else right = mid;
        }
        if(n[left] != target) return{-1,-1};
        else begin = left;

        left = 0, right = n.size() - 1;
         while(left < right)
        { 
            int mid = left + (right - left + 1)/2;
            if(target >= n[mid])    left = mid;
            else right = mid - 1;
        }
        return {begin, right};
    }
};


/*
## 一、暴力解法 
O(n)，遍历一遍

## 二、朴素二分
起始位置、中间位置、末尾位置
可能会将为暴力解法

## 三、利用二段性
分为左端小于t(target)，右端段大于等于 t ,则左端点在右段
==>[left, x) [x, right]
* t  >  x  ==> left  = mid + 1  ==> [ left, right ]
*  x <= t  ==> right = mid   ==> [ left, right ]
### 1. 查找区间左端点
**细节处理：**
1.1. 循环条件
left < right （不能等于，要是等于就会陷入死循环）
1.2. 求中点的操作
- 偶数个时:
    - 左边一个：mid = left + (right - left)/2
	- 右边一个：mid = left + (right - left +1)/2 (会陷入死循环，违反了二段性)
- 奇数个时，都行

### 2. 查找区间右端点
分为大于左段小于等于t，右段大于t，则右端点在左段
==>[ left , t ], ( t , right ]
-  x <= mid ==> left = mid ==> [ left , right ]
- x > mid  ==> right = mid - 1  ==>[ left , right ]
**细节处理：**
2.1. 循环条件
2.2. 中点操作
*/