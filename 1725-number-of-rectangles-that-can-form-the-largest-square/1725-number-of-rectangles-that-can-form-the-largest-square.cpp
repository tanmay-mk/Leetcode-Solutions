class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int count = 0;

        int rectanglesSize = rectangles.size();

        vector<int> minSides; 

        /*get smallest side of each rectangle*/
        for(int i=0; i<rectanglesSize; i++)
        {
            int min = 0; 
            min = (rectangles[i][0] < rectangles[i][1])? rectangles[i][0] : rectangles[i][1]; 
            minSides.push_back(min);
        }

        /*sort minSides array*/
        sort(minSides.begin(), minSides.end());
        
        /*array is sorted in ascending order, so square with max length must be the last element in this vector*/
        int maxLength = minSides.back();
        
        for(int i = 0; i<rectanglesSize; i++)
        {
            if(minSides[i] == maxLength)
            {
                count++;
            }
        }
        return count; 
    }
};