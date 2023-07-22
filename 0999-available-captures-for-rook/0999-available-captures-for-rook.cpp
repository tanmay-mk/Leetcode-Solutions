class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {

        int row = 1, col = 1; 
        
        //find the white rook
        for(int i = 0; i<8; i++)
        {
            bool found = false; 
            for(int j = 0; j<8; j++)            
            {
                if(board[i][j] == 'R')
                {
                    row = i; col = j; 
                    found = true; 
                    break; 
                }
            }
            if(found)
            {
                break; 
            }
        }
        
        int captures = 0; 
        
        //find captures on top of the rook
        for(int i=row-1; i>=0; i--)
        {
            if(board[i][col] == 'B')
            {
                break; 
            }
            
            if(board[i][col] == 'p')
            {
                captures++;
                break;
            }
        }
        
        //find captures on bottom of the rook
        for(int i=row+1; i<8; i++)
        {
            if(board[i][col] == 'B')
            {
                break; 
            }
            
            if(board[i][col] == 'p')
            {
                captures++;
                break;
            }
        }
        
        //find captures on left of the rook
        for(int i=col-1; i>=0; i--)
        {
            if(board[row][i] == 'B')
            {
                break; 
            }
            
            if(board[row][i] == 'p')
            {
                captures++;
                break;
            }
        }
                
        //find captures on right of the rook
        for(int i=col+1; i<8; i++)
        {
            if(board[row][i] == 'B')
            {
                break; 
            }
            
            if(board[row][i] == 'p')
            {
                captures++;
                break;
            }
        }
        
        return captures; 
    }
};