

int binaryGap(int n){
    
    int current_distance = 0, max_distance = 0; 
    
    /*get the index of first 1 in the number*/
    int firstIdx = 0;
    for (int i = 0; i < 31; i++)
    {
        if ((n & (1 << i)) != 0)
        {
            firstIdx = i;
            break;
        }
    }
    
    for (int i = firstIdx; i<31; i++)
    {
        if ((n & (1 << i)) == 0)
        {
            current_distance++;
        }
        else
        {
            if(current_distance > max_distance)
            {
                max_distance = current_distance; 
            }
            current_distance = 1;
        }
        

    }
    
    return max_distance;
}