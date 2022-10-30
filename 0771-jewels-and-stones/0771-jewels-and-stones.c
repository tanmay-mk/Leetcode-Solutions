

int numJewelsInStones(char * jewels, char * stones){

    int jewelSize = strlen(jewels);
    int stonesSize = strlen(stones);
    int count = 0;
    
    for (int i = 0; i < jewelSize; i++)
    {
        for (int j = 0; j < stonesSize; j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
    }
    return count; 
}