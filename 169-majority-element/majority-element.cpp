class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int ans=1;
       int no;
       int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(ans==1){
                no=nums[i];
            }
            if(nums[i]==no){
                ans++;
            }
            else 
            ans--;
       } 
       return no;
    }
};