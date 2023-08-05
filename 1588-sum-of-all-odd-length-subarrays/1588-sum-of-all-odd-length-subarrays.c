int ElementSum(int *arr, int start, int end)
{
    int sum=0; 
    
    for(int i=start; i<=end; i++)
    {
        sum += arr[i]; 
    }
    
    return sum; 
}

int sumOddLengthSubarrays(int* arr, int arrSize){

    int maxOdd = ((arrSize % 2) == 0)? (arrSize - 1) : arrSize; 
    int runningSum = 0; 

    for(int i=0; i<arrSize; i++)
    {
        runningSum += arr[i];
    }
    
    int currOdd = 3; 
    while(currOdd <= maxOdd)
    {
        for(int i=0; i<=(arrSize-currOdd); i++)
        {
            runningSum += ElementSum(arr, i, i+currOdd-1);
        }
        currOdd += 2; 
    }
    
    return runningSum; 
}