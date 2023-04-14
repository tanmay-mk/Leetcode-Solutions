typedef struct word
{
    int rank; 
    char str[200];
}word_t;

int compare(word_t *w1, word_t *w2)
{
    return (w1->rank - w2->rank); 
}

char* str_rev(char *str)
{
    int len=strlen(str);
    for(int i=0; i<(len/2); i++)
    {
        str[i] ^= str[len-i-1];
        str[len-i-1] ^= str[i];
        str[i] ^= str[len-i-1];
    }
    return str; 
}

char * sortSentence(char * s){
    
    int num_words = 1; 
    int sLen = strlen(s);
    for(int i=0; i<sLen; i++)
    {
        if(s[i] == ' ')
        {
            num_words++; 
        }
    }
    
    word_t *arr = (word_t *)malloc(sizeof(word_t )*num_words);
    memset(arr, 0, (sizeof(word_t )*num_words));
    
    int idx=0; int strIdx = 0; 
    for(int i=0; i<sLen; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            arr[idx].rank = s[i] - '0'; 
            for(int j=i-1; j>=0; j--)
            {
                if(s[j] == ' ')
                {
                    break; 
                }
                arr[idx].str[strIdx++] = s[j]; 
            }
            idx++;
            strIdx = 0; 
        }
    }

    qsort(arr, num_words, sizeof(word_t), compare); 

    memset(s, 0, sLen);
    for(int i=0; i<num_words; i++)
    {
        strcat(s, str_rev(arr[i].str));
        if(i != num_words-1)
        {
            sLen = strlen(s);
            s[sLen] = ' '; 
        }
    }
    
    free(arr);
    return s; 
}