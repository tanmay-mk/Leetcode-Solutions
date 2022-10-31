class Solution {
public:
    int heightChecker(vector<int>& heights) {
     
        //create an array of expected heights
        vector<int> expected (heights);
        sort(expected.begin(), expected.end());
        
        int heightsSize = heights.size();
        int count = 0; 
        
        for(int i = 0; i<heightsSize; i++)
        {
            if (heights[i] != expected[i])
            {
                count++;
            }
        }
        return count;
    }
};