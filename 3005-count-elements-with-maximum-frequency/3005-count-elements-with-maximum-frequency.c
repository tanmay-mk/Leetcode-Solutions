int maxFrequencyElements(int* nums, int numsSize) {
    
    int frequency[101] = {0};
    int highest_freq = 1; //minimum freq has to be 1
    
    
    for(int i=0; i<numsSize; i++)
    {
        frequency[nums[i]-1]++;
        if (highest_freq < frequency[nums[i]-1])
        {
            highest_freq = frequency[nums[i]-1];
        }
    }
    
    int elems = 0; 
    for(int i=0; i<101; i++)
    {
        if (frequency[i] == highest_freq)
        {
            elems += frequency[i];
        }
    }
    
    return elems;
}