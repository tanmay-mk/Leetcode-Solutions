class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> answer(2);
        
        int nums1size = nums1.size(); 
        int nums2size = nums2.size();
        
        for(int i=0; i<nums1size; i++)
        {
            bool flag = false; 
            for(int j=0; j<nums2size; j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = true; 
                    break; 
                }
            }
            
            if(!flag)
            {
                bool present = false; 
                for(int k = 0; k<answer[0].size(); k++)
                {
                    if(nums1[i] == answer[0][k])
                    {
                        present = true; 
                    }
                }
                if (!present)
                {
                    answer[0].push_back(nums1[i]); 
                }
            }
        }
        
        for(int i=0; i<nums2size; i++)
        {
            bool flag = false;
            for(int j=0; j<nums1size; j++)
            { 
                if (nums2[i] == nums1[j])
                {
                    flag = true; 
                    break; 
                }
            }
            
            if(!flag)
            {
                bool present = false; 
                for(int k = 0; k<answer[1].size(); k++)
                {
                    if(nums2[i] == answer[1][k])
                    {
                        present = true; 
                    }
                }
                if (!present)
                {
                    answer[1].push_back(nums2[i]); 
                }
            }
        }
        
        return answer; 
    }
};