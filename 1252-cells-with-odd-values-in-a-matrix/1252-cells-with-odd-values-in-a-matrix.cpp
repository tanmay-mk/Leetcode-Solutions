class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        int rows = indices.size();
        int cols = 2; 
        
        vector<vector<int>> matrix(m, vector<int> (n, 0));
        
        for(int i=0; i<rows; i++)
        {
            int row = indices[i][0]; 
            for(int j=0; j<n; j++)
            {
                matrix[row][j]++;
            }
            int col = indices[i][1];
            for(int j=0; j<m; j++)
            {
                matrix[j][col]++;
            }
        }        
        
        int count = 0; 
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if ((matrix[i][j] & 1) == 1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};