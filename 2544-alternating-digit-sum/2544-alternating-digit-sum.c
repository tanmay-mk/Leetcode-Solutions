int NumDigits(int num)
{
    int count = 0;
    
    while(num > 0)
    {
        count++;
        num = (num/10);
    }
    
    return count;
}

bool ToggleSign(bool sign)
{
    if (sign == true)
    {
        return false;
    }
    return true; 
}

int alternateDigitSum(int n){

    int sum=0;
    bool sign; //false = negative, true = positive
    
    //check number of digits in the number.
    //if number of digits is even, start with negative
    if ((NumDigits(n) & 1) == 0)
    {
        sign = false; 
    }
    else //else positive
    {
        sign = true; 
    }
    
    while(n > 0)
    {
        int rem = (n % 10);
        if (sign == true)
        {
            //positive
            sum += rem; 
        }
        else
        {
            //negative
            sum += (rem*(-1));
        }
        sign = ToggleSign(sign);
        n = (n / 10);
    }
    return sum;
}