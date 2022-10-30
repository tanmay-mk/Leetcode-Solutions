

char * toLowerCase(char * s){

    int sSize = strlen(s);
    
    for (int i=0; i<sSize; i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }           
        }
    }
    return s; 
}