int calculateTime(char * keyboard, char * word){

    int len = strlen(word);
    int time = 0; 
    int prevLoc = 0, curLoc = 0; 
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(keyboard[j] == word[i])
            {
                curLoc = j; 
                if (curLoc < prevLoc)
                {
                    time += (prevLoc - curLoc);
                }
                else
                {
                    time += (curLoc - prevLoc);
                }
                prevLoc = curLoc;
                break; 
            }
        }
    }
    return time;
}