

int numberOfMatches(int n){

    unsigned matches = 0;
    unsigned teams_advance = 0; 
    
    while (n > 1)
    { 
        if ((n & 1) == 1)
        {
            n--; 
            teams_advance++; 
        }
        teams_advance = teams_advance + (n >> 1); 
        matches += (n >> 1);
        n = teams_advance;
        teams_advance = 0;
    }
    return matches; 
}