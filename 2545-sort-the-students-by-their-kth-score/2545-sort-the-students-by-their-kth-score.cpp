class Solution {
public:
    
    void swap_rows(int r1, int r2, int cols, vector<vector<int>>& score)
    {
        for(int i=0; i<cols; i++)
        {
            score[r1][i] ^= score[r2][i];
            score[r2][i] ^= score[r1][i];
            score[r1][i] ^= score[r2][i];
        }
    }
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        int rows = score.size(); 
        int cols = score[0].size();
        
        for(int i=0; i<rows-1; i++)
        {
            for(int j=0; j<rows-i-1; j++)
            {
                if(score[j][k] < score[j+1][k])
                {
                    swap_rows(j, j+1, cols, score);
                }
            }
        }
        return score; 
    }
};