

int hammingDistance(int x, int y){

    uint32_t mask = 0;
    int count = 0;
    
    for (int i = 0; i < 31; i++)
    {
        mask = (y & (1 << i));
        if (((x & (1 << i)) ^ mask) != 0)
        {
            count++;
        }
    }
    
    return count;
    
}