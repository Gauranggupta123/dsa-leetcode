class Solution {
public:
    int solve(vector<int>& nums, int i, int curr) {
        if (i == nums.size()) {
            return curr;
        }
        int a = solve(nums, i + 1, curr);
        int b = solve(nums, i + 1, curr ^ nums[i]);

        return a + b;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};