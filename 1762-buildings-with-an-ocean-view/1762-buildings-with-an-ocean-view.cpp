class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
     
        vector<int> arr; 
        
        int listSize = heights.size();
        
        for(int i=0; i<listSize; i++)
        {
            while (!arr.empty() && heights[arr.back()] <= heights[i]) 
            {
                arr.pop_back();
            }
            arr.push_back(i);
        }
        return arr;
    }
};