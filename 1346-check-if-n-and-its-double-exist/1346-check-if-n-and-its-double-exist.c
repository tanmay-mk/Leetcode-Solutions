bool checkIfExist(int* arr, int arrSize){

    for(int i = 0; i < arrSize; i++)
    {
        int twice = (arr[i]*2); 
        for(int j = 0; j < arrSize; j++)
        {
            if (i != j)
            {
                if(twice == arr[j] || (arr[j]*2) == arr[i])
                {
                    return true;
                }
            }
        }
    }
    
    return false; 
}