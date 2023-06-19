/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
	int trap(vector<int>& height) {
		int n = height.size(), ans = 0;
		vector<int> mxl(n), mxr(n);
		mxl[0] = height[0], mxr[n - 1] = height[n - 1];
		for (int i = 1; i < n; i++)
			mxl[i] = max(height[i], mxl[i - 1]);
		for (int i = n - 2; i >= 0; i--)
			mxr[i] = max(height[i], mxr[i + 1]);
		for (int i = 0; i < n; i++)
			ans += abs(min(mxl[i], mxr[i]) - height[i]);
		return ans;
	}
};
// @lc code=end

