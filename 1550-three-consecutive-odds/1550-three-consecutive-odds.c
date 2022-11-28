bool isOdd(int x) 
{
    return (x&1);
}
bool threeConsecutiveOdds(int* arr, int arrSize)
{
    for (int i = 0; i < arrSize - 2; i++) 
    {
        if (isOdd(arr[i]) && isOdd(arr[i+1]) && isOdd(arr[i+2])) 
        {
            return true;
        }
    }
    return false;
}