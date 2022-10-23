class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());
        
        int numsSize = nums.size();
        
        int a = nums[numsSize-1]-1;
        int b = nums[numsSize-2]-1;
        
        return a*b; 
        
    }
};