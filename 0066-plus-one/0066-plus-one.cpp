class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int>::iterator itr = digits.end()-1;
    
        *itr += 1;
        
        vector<int> retVec;
        
        for (int i = digits.size()-1; i>=0; i--)
        {
            if((digits[i] > 9) && (i > 0))
            {
                digits[i] = 0;
                digits[i-1] += 1;
                
            }
            
            if ((i == 0) && digits[i] > 9)
            {
                retVec.push_back(1);
                digits[i] = 0;
            }
        }
        
        for (int i:digits)
        {
            retVec.push_back(i);
        }
        
        return retVec;
    }
};