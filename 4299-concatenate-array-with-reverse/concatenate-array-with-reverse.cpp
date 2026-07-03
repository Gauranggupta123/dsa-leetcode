class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
       vector<int> ans(2 * nums.size());

int i = 0;
while (i < nums.size()) {
    ans[i] = nums[i];
    ans[2 * nums.size() - 1 - i] = nums[i];
    i++;
}

return ans;
    }
};