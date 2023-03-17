int max(int *arr, int arrsize)
{
    int max = arr[0]; 
    
    for(int i=1; i<arrsize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
        }
    }
    return max; 
}

void rmv(int *arr, int num, int arrsize)
{
    int i=0; 
    while(arr[i] != num)
    {
        i++;
    }
    while(i < arrsize-1)
    {
        arr[i] = arr[i+1];
        i++;
    }
}

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize){

    int sum = 0;
    int rows = gridSize, cols = *gridColSize; 

    int *deleted = (int *)malloc(sizeof(int)*rows);
    memset(deleted, 0, (sizeof(int)*rows)); 
    int thismax = 0; 
    
    while(cols > 0)
    {
        for(int i = 0; i<rows; i++)
        {

            thismax = max(grid[i], cols); 
            rmv(grid[i], thismax, cols);
            deleted[i] = thismax; 
        }
        sum += max(deleted, rows);
        cols--; 
    }
    return sum; 
}