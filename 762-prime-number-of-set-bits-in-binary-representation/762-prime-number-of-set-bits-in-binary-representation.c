
int countSetBits(uint32_t num)
{
    int count = 0; 
    for (int i = 0; i < 31; i++)
    {
        if ((num & (1 << i)) != 0)
        {
            count++;
        }
    }
    return count;
}

bool isPrime (int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }
    
    for (int i = 2; i<= num/2; i++)
    {
        if ((num % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimeSetBits(int left, int right){

    int count = 0;
    int setBits; 
    bool flag = false;
    for (int i = left; i<=right; i++)
    {
        setBits = countSetBits(i);
        flag = isPrime (setBits);
        if (flag == true)
        {
            count++;
        }
    }
    
    return count; 
}