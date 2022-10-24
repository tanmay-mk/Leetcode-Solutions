class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int numsSize = nums.size();
        bool flag = false; int sum = 0;
        for(int i=0; i<numsSize; i++)
        {
            flag = false;
            for (int j = i+1; j<numsSize; j++)
            {
                if (nums[i] == nums [j])
                {
                    flag = true; 
                    i++;
                }
            }
            if (!flag)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};