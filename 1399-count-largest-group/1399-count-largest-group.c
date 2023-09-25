//given the constraints, the largest possible sum will be of 9999, which is 36. 

int DigitSum(int n)
{
    int sum=0; 
    while(n > 0)
    {
        int rem = n%10; 
        sum += rem; 
        n /= 10;
    }
    return sum; 
}

int countLargestGroup(int n){

    int count[36] = {0};
    
    for(int i=0; i<n; i++)
    {
        count[DigitSum(i+1) - 1]++;
    }
    
    int max = 0, numMax = 0; 
    
    for(int i=0; i<36; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            numMax = 1;
        }
        else if(count[i] == max)
        {
            numMax++;
        }
    }
    return numMax;
}