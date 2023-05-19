class Solution {
public:
    
    void flipHorizontal(vector<int>& row, int cols)
    {
        for(int i=0; i<cols/2; i++)
        {
            row[i] ^= row[cols-i-1];
            row[cols-i-1] ^= row[i];
            row[i] ^= row[cols-i-1];
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int rows = image.size(); 
        int cols = image[0].size();
        
        for(int i=0; i<rows; i++)
        {
            flipHorizontal(image[i], cols);
            for(int j=0; j<cols; j++)
            {
                image[i][j] = (image[i][j] == 1)? 0 : 1; 
            }
        }
        return image; 
    }
};