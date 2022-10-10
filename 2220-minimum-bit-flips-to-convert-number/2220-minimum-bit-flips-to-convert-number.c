

int minBitFlips(int start, int goal){
    
    int mask=0; 
    int count = 0;
    
    for (int i = 0; i < 31; i++)
    {
        mask = (goal & (1 << i));
        if (((start & (1 << i)) ^ mask) != 0)
        {
            count++;
        }
    }
    
    return count;

}