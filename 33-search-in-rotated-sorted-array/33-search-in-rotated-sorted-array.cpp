class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        bool found = false;
        int pos = 0;
        
        for (int i = 0; i<nums.size(); i++)
        {
            if (nums[i] == target)
            {
                found = true;
                pos = i;
                break;
            }
        }
        
        if (found == false)
        {
            return -1;
        } 
        return pos;
    }
};