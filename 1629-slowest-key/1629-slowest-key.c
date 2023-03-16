typedef struct slow_key_chars
{
    char key; 
    int time_pressed; 
}chars_t;

//returns 0 if equal
//returns 1 if 1 > 2
//returns -1 if 2 > 1
int compare(const chars_t* key1, const chars_t* key2)
{
    chars_t k1 = *key1; 
    chars_t k2 = *key2; 
    
    if (
        (k1.time_pressed == k2.time_pressed) && 
        (k1.key == k2.key)
       )
    {
        //same stuff
        return 0; 
    }
    
    else if (
            ((k1.time_pressed == k2.time_pressed) && (k1.key < k2.key))
        
        )
    {
        //2 > 1
        return -1; 
    }
    else if (
            ((k1.time_pressed == k2.time_pressed) && (k1.key > k2.key))
        )
    {
        // 1 > 2
        return 1; 
    }
    else if((k1.time_pressed < k2.time_pressed))
    {
        return -1; 
    }
    else if((k1.time_pressed > k2.time_pressed))
    {
        return 1; 
    }
    
    
    //should never come here
    return -1; 
}

char slowestKey(int* releaseTimes, int releaseTimesSize, char * keysPressed){
    
    chars_t *keyChars = (chars_t *)malloc(sizeof(chars_t)*releaseTimesSize);
    
    for(int i=0; i<releaseTimesSize; i++)
    {
        keyChars[i].key = keysPressed[i]; 
        if(i != 0)
        {
            keyChars[i].time_pressed = releaseTimes[i] - releaseTimes[i-1]; 
        }
        else
        {
            keyChars[i].time_pressed = releaseTimes[i]; 
        }
    }
    
    // for(int i=0; i<releaseTimesSize; i++)
    // {
    //     printf("keyChars[%d].key = %c\nkeyChars[%d].time_pressed = %d\n\n", i, keyChars[i].key, i, keyChars[i].time_pressed);
    // }
    
    qsort(keyChars, releaseTimesSize, sizeof(chars_t), compare);
    
    // for(int i=0; i<releaseTimesSize; i++)
    // {
    //     printf("keyChars[%d].key = %c\nkeyChars[%d].time_pressed = %d\n\n", i, keyChars[i].key, i, keyChars[i].time_pressed);
    // }
    
    char result = keyChars[releaseTimesSize-1].key; 
    
    free(keyChars);
    
    return result; 
}