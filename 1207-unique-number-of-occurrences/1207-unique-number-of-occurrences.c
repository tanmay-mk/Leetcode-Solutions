int compare(int *a, int *b)
{
    return (*a - *b); 
}

bool uniqueOccurrences(int* arr, int arrSize){
    
    if (arrSize == 1)
    {
        return true; 
    }

    if(arrSize == 2)
    {
            if(arr[0] == arr[1])
            {
                return true; 
            }
            return false; 
    }
    
    qsort(arr, arrSize, sizeof(int), compare);
    
    int occurrences[1000] = {0}; 
    int idx = 0; 
    int count = 0; 
    for(int i=0; i<arrSize-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            for(int j=0; j<idx; j++)
            {
                if (count == occurrences[j])
                {
                    return false; 
                }
            }
            occurrences[idx++] = count; 
            count = 0; 
        }
        else
        {
            count++; 
        }
    }
    return true; 
}