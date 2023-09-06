long long findTheArrayConcVal(int* nums, int numsSize){

    if(numsSize == 1)
    {
        return ((long long) nums[0]);
    }
    
    long long answer = 0; 
    char arr[15] = {0}; 
    int i = 0, j = (numsSize - 1); 
    
    while(i < j)
    {
        memset(arr, 0, sizeof(char)*15);
        sprintf(arr, "%d%d", nums[i], nums[j]);
        answer += atoi(arr);
        
        i++; j--;
        
        if(i == j)
        {
            answer += nums[i]; 
        }
    }
    return answer; 
}