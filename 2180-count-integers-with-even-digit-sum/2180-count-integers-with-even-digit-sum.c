bool evenDigitSum(int num)
{
    int sum = 0;
    while(num > 0)
    {
        int rem = num%10; 
        sum += rem; 
        num /= 10; 
    }
    if ((sum & 1)==0)
    {
        return true;
    }
    return false;
}

int countEven(int num){
    
    int count=0;
    
    for(int i = 1; i<=num; i++)
    {
        if(evenDigitSum(i) == true)
        {
            count++;
        }
    }
    
    return count; 
}