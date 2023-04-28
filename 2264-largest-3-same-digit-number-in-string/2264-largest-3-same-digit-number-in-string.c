char * largestGoodInteger(char * num){

    char same[4] = {0};
    
    int max = 0; 
    int numLen = strlen(num);
    
    
    for(int i = 0; i<(numLen-2); i++)
    {
        if(num[i] == num[i+1] && num[i] == num[i+2])
        {
            if(num[i] > max)
            {
                max = num[i];
            }
        }
    }
    
    memset(same, max, 3);
    strcpy(num, same);
    return num; 
}