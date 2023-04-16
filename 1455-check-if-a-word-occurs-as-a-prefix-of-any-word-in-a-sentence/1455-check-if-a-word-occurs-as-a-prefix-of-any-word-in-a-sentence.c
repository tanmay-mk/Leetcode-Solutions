int isPrefixOfWord(char * sentence, char * searchWord){

    char *argv[100] = {0};
	int argc = 0;
    int sLen = strlen(sentence);
    int searchLen = strlen(searchWord);
    
    char *p = sentence;
	char *end = (char *)(sentence+sLen);
    //for(end=sentence ; *end!= '\0' ; end++);
    
    bool in_char = false; 
    
    for(p = sentence; p < end; p++)
	{
        switch(in_char)
        {
            case false: 
                argv[argc] = (char *)p; 
                argc++; 
                in_char = true; 
            break; 
                
            case true:
                if (*p == ' ')
                {
                    *p = '\0';
                    in_char = false; 
                }
            break; 
        }
    }

    for(int i=0; i<argc; i++)
    {
        int len = strlen(argv[i]); 
        if(len < searchLen)
        {
            continue; 
        }
        if(memcmp(argv[i], searchWord, searchLen) == 0)
        {
            return i+1;
        }
    }
    
    return -1; 
}