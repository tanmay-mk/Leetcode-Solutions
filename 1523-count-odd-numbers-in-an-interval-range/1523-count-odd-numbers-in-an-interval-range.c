

int countOdds(int low, int high){

    int count=0;
    
    bool low_odd = false, high_odd = false;
    
    if((low & 1) == 1)
    {
        low_odd = true;
        count++;
    }
    
    if((high & 1) == 1)
    {
        high_odd = true;
        count++;
    }
     
    
    if ((low_odd == true) && (high_odd == true))
    {
        return (count + (((high - low) >> 1) - 1));
    }
    return (count + ((high - low) >> 1));
}