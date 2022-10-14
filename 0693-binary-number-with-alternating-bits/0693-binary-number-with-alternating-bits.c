

bool hasAlternatingBits(int n){

    bool prev = false; /*false = previous bit was 0, true = previous bit was 1*/
    
    /*determine whether first bit is 0 or 1*/
    prev = ((n & 1) == 1)? true : false; 
    
    int temp = n, numbits = 0; 
    while(temp > 0)
    {
        temp = temp >> 1; 
        numbits++;
    }
    
    for (int i = 1; i < numbits; i++)
    {
        if (false == prev) /*prev bit was 0*/
        {
            if ((n & (1 << i)) != 0)    //next bit is 1
            {
                prev = true; 
            }
            else        //next bit is 0
            {
                return false;
            }
        }
        else if (true == prev) /*prev bit was 1*/
        {
            if ((n & (1 << i)) != 0)    //next bit is 1
            {
                return false;
            }
            else        //next bit is 0
            {
                prev = false; 
            }
        }
    }
    
    return true;
    
}