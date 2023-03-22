int diagonalSum(int** mat, int matSize, int* matColSize){

    int front = 0, back = matSize - 1;
    
    int sum=0; 
    
    for(int i=0; i<matSize; i++)
    {
        sum += mat[i][front++]; 
        sum += mat[i][back--]; 
    }
    
    if(matSize & 1) //number of columns is odd
    {
        int idx = (matSize >> 1); 
        sum -= mat[idx][idx]; 
    }
    return sum; 
}