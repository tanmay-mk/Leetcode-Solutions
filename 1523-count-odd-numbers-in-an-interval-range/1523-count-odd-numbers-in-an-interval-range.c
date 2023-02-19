

int countOdds(int low, int high){

    int count=0;
    
    if((low & 1) == 1)
    {
        count++;
    }
    
    if((high & 1) == 1)
    {
        count++;
    }
     
    
    if (((low & 1) == 1) && ((high & 1) == 1))
    {
        return (count + (((high - low) >> 1) - 1));
    }
    
    return (count + ((high - low) >> 1));
}