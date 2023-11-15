enum {
    WAIT_LEAD_BAR = 0,
    WAIT_TRAIL_BAR = 1
};

int countAsterisks(char* s) {
    
    bool state = WAIT_LEAD_BAR;
    int count = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        switch(state)
        {
            case WAIT_LEAD_BAR:
                if (s[i] == '*')
                {
                    count++; 
                    break; 
                }
                if (s[i] == '|')
                {
                    state = WAIT_TRAIL_BAR;
                    break; 
                }
                break; 
                
            case WAIT_TRAIL_BAR:
                if (s[i] == '|')
                {
                    state = WAIT_LEAD_BAR;
                    break; 
                }
                break; 
        }
    }
    return count;
}