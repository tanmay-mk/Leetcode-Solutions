#define MAX(a, b) ((a > b)? a : b)

int uniqueMorseRepresentations(char ** words, int wordsSize){

    char morsecode[26][5] = {
                                ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--",
                                "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
                            };
    
    const int morsecodelength = 50; //cannot be more than this
    char **morse_arr = (char **)malloc(sizeof(char *)*wordsSize); 
    for(int i=0; i<wordsSize; i++)
    {
        morse_arr[i] = (char *)malloc(sizeof(char)*morsecodelength);
        memset(morse_arr[i], 0, (sizeof(char)*morsecodelength)); 
    }
    int idx = 0; 
    for(int i=0; i<wordsSize; i++)
    {
        bool flag = false; 
        int len = strlen(words[i]); 
        for(int j = 0; j < len; j++)
        {
            char ch = words[i][j];
            strcat(morse_arr[idx], morsecode[ch - 'a']);
        }
        
        for(int j = 0; j<idx; j++)
        {
            if(strcmp(morse_arr[j], morse_arr[idx]) == 0)
            {
                flag = true; 
                memset(morse_arr[idx], 0, (sizeof(char)*morsecodelength)); 
                break; 
            }
        }
        
        if(flag == false)
        {
            idx++;
        }
    }
    
    for(int i=0; i<wordsSize; i++)
    {
        printf("%s\n", morse_arr[i]);
        free(morse_arr[i]);
    }
    free(morse_arr);
    
    return idx; 
}