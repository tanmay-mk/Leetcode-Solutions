

int bitwiseComplement(int n){

    if (n == 0)
    {
        return 1;
    }
    
    int temp = n;
    
    int numBits = 0;
    
    while (temp > 0)
    {
        temp = temp >> 1; 
        numBits++;
    }
    
    for(int i = 0; i <numBits; i++)
    {
        n = (n ^ (1 << i));
    }
    
    return n;
    
}