class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int numsSize = nums.size();
        
        vector<int>retArr; 
        
        for(int i=0; i<numsSize; i+=2)
        {
           for (int j=0; j<nums[i]; j++)
           {
               retArr.push_back(nums[i+1]);
           }
        }
        return retArr; 
    }
};