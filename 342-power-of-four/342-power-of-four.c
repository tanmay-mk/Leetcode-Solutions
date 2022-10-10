

bool isPowerOfFour(int n){
    
    if (n == 1)
    {
        return true;
    } 
    
    if (n < 0)
    {
        return false;
    }
    
    if (n % 4 != 0)
    {
        return false;
    }
    
    uint32_t one = 1; 
    
    for(int i = 2; i<32; i+=2)
    {
        if (n == (one << (i)))
        {
            return true;
        }
    }
    return false;
    
}
