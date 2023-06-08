/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = m;
		for (int l = 0; l < n; l++) {
			nums1[i] = nums2[l];
			i++;
		}
		sort(nums1.begin(), nums1.end());
	}
};
// @lc code=end
