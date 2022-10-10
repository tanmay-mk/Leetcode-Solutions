class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        sort (nums.begin(), nums.end());
        
        int listSize = nums.size();
        
        for (int i = 0; i<listSize-1; i+=2)
        {
            if (nums[i] != nums[i+1])
            {
                return false;
            }
        }
        
        return true; 
    }
};