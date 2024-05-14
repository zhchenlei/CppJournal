/**
 * https://leetcode.cn/problems/search-insert-position/description/
 *  35. 搜索插入位置
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int left = 0, right = nums.size() - 1;
        while(left < right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] < target) left = mid + 1; 
            else right = mid;
        }
        if(nums[left] < target) left++;
        return left;
    }
};

/*# 搜索插入位置

**输入**: nums = [1,3,5,6], target = 2
**输出**: 1  ==>  [1,(2,)3,5,6]
## 1 利用【二段性】
- 当t (target) > nums[mid] 时， 该数位置在右段；
- 当t (target) <= nums[mid] 时，该数位置在左段；
==> [ left, mid) [mid, right]
## 2 求中点的操作
int mid = left + (right - left)/2;
- nums[ mid ] < t   ==>  left = mid + 1;  
- nums [ mid ] >= t   ==> right = mid;

- 当right = mid ，且nums[left] < target，插入到最后面

*/