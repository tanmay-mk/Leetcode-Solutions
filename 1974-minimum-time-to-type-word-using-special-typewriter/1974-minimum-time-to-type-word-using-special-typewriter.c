int GetClockwiseDistance(char currptr, char target)
{
    int dist = 0; 
    
    while(currptr != target)
    {
        dist++; 
        currptr++; 
        if (currptr == ('z'+1))
        {
            currptr = 'a'; 
        }
    }
    return dist;
}

int GetCounterClockwiseDistance(char currptr, char target)
{
    int dist = 0; 
    
    while(currptr != target)
    {
        dist++; 
        currptr--; 
        if (currptr == ('a'-1))
        {
            currptr = 'z'; 
        }
    }
    return dist;
}

int minTimeToType(char* word) {
    
    int time = 0; 
    int cw = 0, ccw = 0; 
    
    char curr = 'a'; 
    int len=strlen(word);
    
    for(int i=0; i<len; i++)
    {
        cw = GetClockwiseDistance(curr, word[i]); 
        ccw = GetCounterClockwiseDistance(curr, word[i]); 
        
        //check time taken to go to the character and add it to time
        if (cw > ccw)
        {
            time += ccw; 
        }
        else
        {
            time += cw; 
        }
        
        //finally, take one second to write character
        time++;
        
        //update current pointer
        curr = word[i]; 
    }
        
    return time; 
}