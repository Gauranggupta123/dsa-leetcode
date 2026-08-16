class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int doub=0;
        int single=0;
         for(int i=0; i<nums.size();i++){
            if(nums[i]>9){
                doub+=nums[i];
            }
            else
            single+=nums[i];

         }
         return (doub!=single);
    }
};