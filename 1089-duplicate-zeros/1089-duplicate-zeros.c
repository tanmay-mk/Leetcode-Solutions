void insert_zero(int *arr, int arrSize, int pos)
{
    for(int i=arrSize - 1; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = 0;
}


void duplicateZeros(int* arr, int arrSize){

    for(int i=0; i<arrSize-1; i++)
    {
        if(arr[i] == 0)
        {
            insert_zero(arr, arrSize, i+1); 
            i++;
        }
    }
}