class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        //sort it
        sort(nums.begin(), nums.end());
        
        int numsSize = nums.size();
        vector<int> retArr;
        
        for(int i=0; i<numsSize; i++)
        {
            if (nums[i] == target)
            {
                retArr.push_back(i);
            }
        }
        return retArr;
    }
};