/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size(), l = 0, r = 1;
		while (r < n) {
			if (nums[r] != nums[l])
				nums[++l] = nums[r];
			r++;
		}
		return l + 1;
	}
};
// @lc code=end

