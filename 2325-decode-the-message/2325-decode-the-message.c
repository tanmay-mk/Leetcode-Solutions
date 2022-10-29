int getIdxFromMsg(char *encoding, char next_char)
{
    int encodingLength = 26;
    for(int i=0; i<encodingLength; i++)
    {
        if (encoding[i] == next_char)
        {
            return i;
        }
    }
    return -1;
}

char * decodeMessage(char * key, char * message)
{
    int msg_len = strlen(message)+1;
    int key_len = strlen(key);
    
    char *decoded = (char *)malloc(sizeof(char)*msg_len);
    memset(decoded, 0, (sizeof(char)*msg_len));
    
    char *encoding = (char *)malloc(sizeof(char)*key_len);
    memset(encoding, 0, (sizeof(char)*key_len));
    
    char alphabets[26];
    /*populate the alphabets character*/
    for(int i = 0; i<26; i++)
    {
        alphabets[i] = 'a' + i;
    }
    
    int count = 0; bool flag = false; 
    for(int i = 0; i<key_len && count != 26; i++)
    {
        if (key[i] == ' ')
        {
            continue; 
        }
       char next_char = key[i];
        /*check if that character is already present*/
        for(int j=0; j<i; j++)
        {
            if (next_char == encoding[j])
            {
                flag = true; 
                break;
            }
        }
        if (flag == false)
        {
            encoding[count++] = next_char; 
        }
        else
        {
            flag = false; 
        }
    }
     
    for(int i = 0; i<msg_len; i++)
    {
        if (message[i] == ' ')
        {
            decoded[i] = ' ';
            continue;
        }
        char next_char = message[i];
        int idx = getIdxFromMsg(encoding, next_char);
        if (idx != -1)
        {
            decoded[i] = alphabets[idx];
        }
    }
    
    return decoded; 
}