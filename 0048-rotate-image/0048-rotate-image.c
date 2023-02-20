void rotate(int** matrix, int matrixSize, int* matrixColSize){

    int n = matrixSize; 
    for (int i=0; i<(matrixSize + 1)/2; i++) //for rows
    {
        for (int j=0; j<matrixSize/2; j++) // for columns
        {
            int temp = matrix[matrixSize - 1 - j][i];
            matrix[matrixSize - 1 - j][i] = matrix[matrixSize - 1 - i][matrixSize - j - 1];
            matrix[matrixSize - 1 - i][matrixSize - j - 1] = matrix[j][matrixSize - 1 -i];
            matrix[j][matrixSize - 1 - i] = matrix[i][j];                
            matrix[i][j] = temp;
        }
    }    
}
