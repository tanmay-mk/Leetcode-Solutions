void RemoveChar(char *s, char target)
{
    int len = strlen(s); 
    
    for(int i=0; i<len; i++)
    {
        if (s[i] == target)
        {
            for(int j=i; j<len-1; j++)
            {
                s[j] = s[j+1];
            }
            s[len-1] = '\0';
            len--; i--;
        }
    }
}

char* reformatNumber(char* number) {
    
    RemoveChar(number, ' ');
    RemoveChar(number, '-');
    
    int numLen = strlen(number);
    
    int quo = (numLen / 3); 
    int rem = (numLen % 3); 
    
    char *ans, *ret; 
    
    switch(rem)
    {
        case 0:
            //xxx-xxx-xxx
            ans = (char *)malloc(sizeof(char)*(numLen+quo));
            memset(ans, 0, (sizeof(char)*(numLen+quo)));
            ret = ans; 
            
            for(int i=0; i<numLen; i++)
            {
                if ((i != 0) && (i % 3 == 0))
                {
                    *ans++ = '-'; 
                }
                *ans++ = number[i];
            }
            
        break;
            
        case 1: 
            //xxx-xxx-xx-xx
            ans = (char *)malloc(sizeof(char)*(numLen+quo+1));
            memset(ans, 0, (sizeof(char)*(numLen+quo+1)));
            ret = ans; 
            
            for(int i=0; i<numLen-4; i++)
            {
                if ((i != 0) && (i % 3 == 0))
                {
                    *ans++ = '-'; 
                }
                *ans++ = number[i];
            }
            
            if (numLen != 4)
            {
                *ans++ = '-';
            }

            *ans++ = number[numLen-4];
            *ans++ = number[numLen-3];
            *ans++ = '-';
            *ans++ = number[numLen-2];
            *ans++ = number[numLen-1];


        break; 
            
        case 2: 
            //xxx-xxx-xx
            ans = (char *)malloc(sizeof(char)*(numLen+quo+1));
            memset(ans, 0, (sizeof(char)*(numLen+quo+1)));
            ret = ans; 
            
            for(int i=0; i<numLen-2; i++)
            {
                if ((i != 0) && (i % 3 == 0))
                {
                    *ans++ = '-';
                }
                *ans++ = number[i];
            }
            
            if (numLen == 2)
            {
                return number; 
            }
            else
            {
                *ans++ = '-';
                *ans++ = number[numLen-2];
                *ans++ = number[numLen-1];
            }
            
        break; 
    }

    return ret; 
    
}