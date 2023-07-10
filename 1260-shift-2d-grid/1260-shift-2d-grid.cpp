class Solution {
public:
    
    void shift(vector<int>& arr)
    {
        int len = arr.size();
        int temp = arr[len-1]; 
        
        for(int i=len-1; i>0; i--)
        {
            arr[i] = arr[i-1]; 
        }
        
        arr[0] = temp; 
    }
    
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int rows = grid.size(); 
        int cols = grid[0].size(); 
        
        int elems = rows * cols; 
        
        vector<int> grid1d; 
        
        for(int ri=0; ri<rows; ri++)
        {
            for(int ci=0; ci<cols; ci++)
            {
                grid1d.push_back(grid[ri][ci]);
            }
        }
        
        while (k > 0)
        {
            shift(grid1d);
            k--;
        }
        
        int idx = 0; 
        for(int ri=0; ri<rows; ri++)
        {
            for(int ci=0; ci<cols; ci++)
            {
                grid[ri][ci] = grid1d[idx++];
            }
        }
        return grid; 
    }
};