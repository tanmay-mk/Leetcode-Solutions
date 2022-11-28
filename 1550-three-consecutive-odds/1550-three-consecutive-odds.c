bool threeConsecutiveOdds(int* arr, int arrSize){

    int count = 0; 
    
    for(int i=0; i<arrSize; i++)
    {
        if ((arr[i] & 1) == 1)
        {
            count++; 
            if (count > 2)
            {
                return true; 
            }    
        }
        else
        {
            count = 0;
        }
    }
    return false; 
}