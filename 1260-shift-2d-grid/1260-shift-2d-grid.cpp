class Solution {
public:
    
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int rows = grid.size(); 
        int cols = grid[0].size(); 
        int last = 0; 

        while(k > 0)
        {
            
            //get the very last element in the grid
            last = grid[rows-1][cols-1]; 
            
            //now start shifting
            int ri; 
            int ci = cols-1; 
            
            if(ci == 0)
            {
                last = grid[rows-1][0];
                for(int ri = rows-1; ri > 0; ri--)
                {
                    grid[ri][0] = grid[ri-1][0];
                }
            }
            else
            {
                ri = rows-1; 
                while(1)
                {
                    grid[ri][ci] = grid[ri][ci-1]; 
                    ci--; 
                    if(ci == 0)
                    {
                        ci = cols - 1;
                        if(ri != 0)
                        {
                            grid[ri][0] = grid[ri-1][ci]; 
                            ri--; 
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            grid[0][0] = last; 
            k--;
        }
        
        return grid; 
    }
};