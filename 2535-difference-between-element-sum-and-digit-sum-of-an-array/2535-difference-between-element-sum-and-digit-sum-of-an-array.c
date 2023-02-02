int DigitSum(int num)
{
    if(num < 10)
    {
        return num;
    }
    
    int temp = num; 
    int sum = 0; 
    while(temp > 0)
    {
        int digit = (temp % 10); 
        sum += digit; 
        temp = (temp/10); 
    }
    return sum; 
}


int differenceOfSum(int* nums, int numsSize){
    
    int elm_sum = 0, dig_sum = 0; 
    
    for(int i=0; i<numsSize; i++)
    {
        elm_sum += nums[i];
        dig_sum += DigitSum(nums[i]);
    }
    
    if (elm_sum < dig_sum)
    {
        return (dig_sum - elm_sum);
    }
    return (elm_sum - dig_sum);
}