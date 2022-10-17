class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> retArr;
        int numsSize = nums.size();
        
        for(int i = 0; i<numsSize; i++)
        {
            retArr.push_back(nums[i]*nums[i]);
        }
        
        sort(retArr.begin(), retArr.end());
        
             
        return retArr; 
    }
};