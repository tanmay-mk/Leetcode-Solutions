class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<int> sortedHeights (heights);
        
        /*sort array in descending order*/
        sort(sortedHeights.begin(), sortedHeights.end(), greater<int>());
        
        vector<string> sortedNames; 
        
        int namesSize = names.size();
        
        for (int i = 0; i < namesSize; i++)
        {
            int nameIdx = 0;
            int height = sortedHeights[i];
            for (int j = 0; j < namesSize; j++)
            {
                if (heights[j] == height)
                {
                    nameIdx = j;
                    break;
                }
            }
            sortedNames.push_back(names[nameIdx]);
        }
        return sortedNames;
    }
};