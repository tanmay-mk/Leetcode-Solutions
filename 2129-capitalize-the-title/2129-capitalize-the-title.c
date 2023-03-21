char * capitalizeTitle(char * title){

    int word_start = 0, word_end = 0; 
    int len = strlen(title);
    
    for(int i=0; i<len; i++)
    {
        while(title[i] != ' ')
        {
            i++; 
            if(i >= len)
            {
                word_end = len - 1; 
                break; 
            }
        }
        word_end = i - 1; 
        int wordlen = word_end - word_start + 1; 
        
        for(int j=word_start; j<=word_end; j++)
        {
            if(wordlen < 3)
            {
                if (wordlen == 1)
                {
                    title[word_start] = tolower(title[word_start]);
                }
                else
                {
                    title[word_start] = tolower(title[word_start]);
                    title[word_end] = tolower(title[word_end]);
                }
            }
            else
            {
                if (j == word_start) 
                {
                    if (title[j] >= 'a' && title[j] <= 'z')
                    {
                        title[j] = toupper(title[j]);
                    }
                }
                else if((title[j] >= 'A' && title[j] <= 'Z'))
                {
                    title[j] = tolower(title[j]);
                }
            }
        }
        word_start = word_end + 2; 
    }
    return title;
}