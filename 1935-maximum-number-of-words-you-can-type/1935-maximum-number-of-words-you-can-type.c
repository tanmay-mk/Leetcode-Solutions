int canBeTypedWords(char * text, char * brokenLetters){

    int alphabets[26] = {0};
    
    int brokenLen = strlen(brokenLetters);
    for(int i=0; i<brokenLen; i++)
    {
        alphabets[brokenLetters[i] - 'a']++; 
    }
    
    char *ptr = text; 
    bool token = false; 
    int textLen = strlen(text);
    
    char *argv[5000] = {0};
	int argc = 0;
    for(int i=0; i<textLen; i++)
    {
        switch(token)
        {
            case false: 
                if(text[i] >= 'a' && text[i] <= 'z')
                {
                    argv[argc] = ptr;
                    argc++;
                    token = true; 
                }
            break; 
                
            case true: 
                if(text[i] == ' ')
                {
                    text[i] = '\0';
                    ptr = &text[i+1]; 
                    token = false; 
                }
            break; 
        }
    }
    
    int words = 0;
    for(int i=0; i < argc; i++)
    {
        bool flag = false; 
        for(char *p = argv[i]; *p != '\0'; p++)
        {
            if (alphabets[*p - 'a'] != 0)
            {
                flag = true;
                break; 
            }
        }
        if (!flag)
        {
            words++;
        }
    }
    return words;     
}