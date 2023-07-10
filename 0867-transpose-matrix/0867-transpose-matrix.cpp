class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int rows = matrix.size(); 
        int cols = matrix[0].size();
        
        vector<vector<int>> retmtx (cols); 
        
        int ri = 0, ci = 0, rri = 0;
        
        for(ri = 0; ri < rows; ri++)
        {
            for(ci = 0; ci < cols; ci++)
            {
                retmtx[rri++].push_back(matrix[ri][ci]);
            }
            rri = 0; 
        }
        
        return retmtx; 
    }
};