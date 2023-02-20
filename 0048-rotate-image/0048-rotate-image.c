void rotate(int** matrix, int matrixSize, int* matrixColSize){

    int n = matrixSize; 
    for (int i=0; i<(matrixSize + 1)/2; i++)
    {
        for (int j=0; j<matrixSize/2; j++)
        {
            int temp = matrix[n - 1 - j][i];
            matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];
            matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 -i];
            matrix[j][n - 1 - i] = matrix[i][j];                
            matrix[i][j] = temp;
        }
    }
    
}
