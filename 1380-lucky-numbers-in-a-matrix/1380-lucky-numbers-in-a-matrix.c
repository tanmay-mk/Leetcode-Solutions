bool isMin(int *arr, int arrSize, int num)
{
    for(int i=0; i<arrSize; i++)
    {
        if (arr[i] < num)
        {
            return false; 
        }
    }
    return true; 
}

bool isMax(int **matrix, int numrows, int col, int num)
{
    for(int i=0; i<numrows; i++)
    {
        if(matrix[i][col] > num)
        {
            return false;
        }
    }
    return true; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize){

    int rows = matrixSize, cols = *matrixColSize; 
    
    int luckyNums = 0; int idx = 0; bool flag = false; 
    int *arr = (int *)malloc(sizeof(int)*luckyNums);

    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            flag = false; 
            if(isMin(matrix[i], cols, matrix[i][j]))
            {
                if(isMax(matrix, rows, j, matrix[i][j]))
                {
                    for(int k=0; k<idx; k++)
                    {
                        if(arr[k] == matrix[i][j])
                        {
                            flag = true;
                            break; 
                        }
                    }
                    if(!flag)
                    {
                        luckyNums++;
                        arr = (int *)realloc(arr, sizeof(int)*luckyNums);
                        arr[idx] = matrix[i][j];
                        idx++;
                    }
                }
            }
        }
        
    }
    *returnSize = luckyNums;
    return arr; 
}