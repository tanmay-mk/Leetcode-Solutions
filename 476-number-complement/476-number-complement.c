

int findComplement(int num){

    int temp = num;
    
    int numBits = 0;
    
    while (temp > 0)
    {
        temp = temp >> 1; 
        numBits++;
    }
    
    for(int i = 0; i <numBits; i++)
    {
        num = (num ^ (1 << i));
    }
    
    return num;
}