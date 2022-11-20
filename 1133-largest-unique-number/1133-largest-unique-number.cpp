class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        
        int numsSize = nums.size();
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        if (numsSize == 1)
        {
            return nums[0];
        }
        
        for(int i=0; i<numsSize; i++)
        {
            // return if there is no duplicate.
            if (i == nums.size() - 1 || nums[i] != nums[i + 1]) 
            {
                return nums[i];
            }

            // While duplicates exist.
            while (i < nums.size() - 1 && nums[i] == nums[i + 1]) 
            {
                i++;
            }
        }
        return -1;
    }
};