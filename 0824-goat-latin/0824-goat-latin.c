void shift(char *s, int sLen)
{
    char temp = s[0]; 
    for(int i=0; i<sLen - 1; i++)
    {
        s[i] = s[i+1]; 
    }
    s[sLen - 1] = temp; 
}

bool isVowel(char c)
{
    return  (
                c == 'a' || c == 'A' || 
                c == 'e' || c == 'E' ||
                c == 'i' || c == 'I' ||
                c == 'o' || c == 'O' ||
                c == 'u' || c == 'U'
            );
}

char * toGoatLatin(char * sentence){
    
    int sLen = strlen(sentence);
    
    char *p = sentence;
    
    char ma_string[] = {'m', 'a', '\0'};
    
    char argv[100][150] = {0};
    int argc = 0; 
    
    for(int i=0; i<sLen; i++)
    {
        if(sentence[i] == ' ')
        {
            sentence[i] = '\0';
        }
    }
    
    for(int i=0; i<sLen; i++)
    {
        if(sentence[i] == '\0')
        {
            strcpy(argv[argc], p);
            p = &sentence[i+1];
            argc++;
        }
    }
    strcpy(argv[argc], p);
    argc++;
    
    int numA = 1; 
    
    sentence = (char *)realloc(sentence, 2000);
    memset(sentence, 0, sizeof(char)*2000);
    
    for(int i=0; i<argc; i++)
    {
        int len = strlen(argv[i]);
        if (isVowel(argv[i][0]) == false)
        {
            shift(argv[i], len);
        }
        strcat(argv[i], ma_string);
        int newLen = strlen(argv[i]);
        memset(&argv[i][newLen], 'a', sizeof(char)*numA);
        numA++;
        strcat(sentence, argv[i]);
        if (i != (argc - 1))
        {
            strcat(sentence, " "); 
        }
    }
    
    return sentence;
}