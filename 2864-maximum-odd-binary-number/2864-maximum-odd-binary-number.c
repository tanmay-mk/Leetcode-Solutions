int compare(char *a, char *b)
{
    return (int)(*b - *a);
}

char* maximumOddBinaryNumber(char* s){
    
    int sLen = strlen(s);
    
    if (sLen == 1)
    {
        return s;
    }
    
    int numOnes = 0; 
    
    for (int i=0; i<sLen; i++)
    {
        if (s[i] == '1')
        {
            numOnes++;
        }
    }
       
    //now swap one of the one's with a zero
    if ((numOnes == 0) || (sLen == numOnes))
    {
        return s; 
    }
        
    //sort in descending order
    qsort(s, sLen, sizeof(char), compare);
    
    //swap one of the one's with the last bit
    s[numOnes-1] ^= s[sLen-1];
    s[sLen-1] ^= s[numOnes-1];
    s[numOnes-1] ^= s[sLen-1];

    return s;
}