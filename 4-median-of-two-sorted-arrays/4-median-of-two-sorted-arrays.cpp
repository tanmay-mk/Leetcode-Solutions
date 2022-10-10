class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
        double retval = 0.0;
        
        if(nums1.size() == 0)
        {
            int m_size = nums2.size();
            if(m_size % 2 == 0)
            {
                m_size /= 2;
                
                return ((double)(nums2[m_size - 1]+nums2[m_size])/2);
            }
            else
            {
                m_size /= 2;
                
                return nums2[m_size];
            }
        }
        
        if(nums2.size() == 0)
        {
            int m_size = nums1.size();
            if(m_size % 2 == 0)
            {
                m_size /= 2;
                
                return ((double)(nums1[m_size - 1]+nums1[m_size])/2);
            }
            else
            {
                m_size /= 2;
                
                return nums1[m_size];
            }
        }
        
        
        vector<int> merged (nums1);
        
        for (int i:nums2)
        {
            merged.push_back(i);
        }
        
        sort(merged.begin(), merged.end());
        
        if (merged.size() % 2 == 0)
        {
            int m_size = merged.size()/2;
            retval = ((double)(merged[m_size - 1]+merged[m_size])/2);  
        }
        else
        {
            int m_size = merged.size()/2;
            retval = merged[m_size];
        }
        
        return retval;
    }  
};