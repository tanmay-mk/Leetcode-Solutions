#define MIN(a, b) ((a<b)?a:b)

char repeatedCharacter(char * s){

    int sLen = strlen(s);
    int minIdx = sLen; 
    
    for(int i=0; i<sLen; i++)
    {
        for(int j=i+1; j<sLen; j++)
        {
            if(s[i] == s[j])
            {
                minIdx = MIN(minIdx, j);
            }
        }
    }
    
    return s[minIdx];
}