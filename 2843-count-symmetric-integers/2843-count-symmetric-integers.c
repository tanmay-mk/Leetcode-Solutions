void my_itoa_decimal(int n, char *buff)
{
    int idx = 0; 
    while(n > 0)
    {
        int rem = n%10; 
        buff[idx++] = rem;
        n/=10; 
    }
    for(int i=0; i<idx/2; i++)
    {
        buff[i] ^= buff[idx-i-1];
        buff[idx-i-1] ^= buff[i];
        buff[i] ^= buff[idx-i-1];
    }
}


int countSymmetricIntegers(int low, int high){

    int count = 0;
    char number[5] = {0};
    
    while ((low <= high) && (low < 10000))
    {
        if ((low >= 10) && (low < 100))
        {
            //2 digit number, check if both digits are same
            my_itoa_decimal(low, number); 
            if(number[0] == number[1])
            {
                count++;
            }
        }
        else if ((low >= 1000) && (low < 10000))
        {
            my_itoa_decimal(low, number); 
            if (((number[0])+(number[1])) == ((number[2])+(number[3])))
            {
                count++;
            }
        }
        low++;  
    }
    return count; 
}