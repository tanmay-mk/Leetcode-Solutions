class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int listSize = nums.size();
        
        if (listSize == 1)
        {
            return nums[0];
        }

        sort(nums.begin(), nums.end());

        int current_count = 0, max_count = 0, max_ct_elmt = 0;

        for (int i=0; i<listSize-1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                current_count++;
                //continue;
            }
            else 
            {
                current_count = 0;
            }
            
            if (current_count > max_count)
            {
                max_count = current_count; 
                max_ct_elmt = nums[i];
            }
        }
        
        return max_ct_elmt;
        
    }
};