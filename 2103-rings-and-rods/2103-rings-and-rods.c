int countPoints(char* rings) {
    
    char *ring = &rings[0]; 
    
    bool Red[10] = {false}, Green[10] = {false}, Blue[10] = {false};
    
    while (*ring != '\0')
    {
        switch(*ring)
        {
            case 'R':
                ring++;
                Red[*ring - '0'] = true;
                ring++;
            break;
                
            case 'G':
                ring++;
                Green[*ring - '0'] = true;
                ring++;
            break;
                
            case 'B':
                ring++;
                Blue[*ring - '0'] = true;
                ring++;
            break;
        } 
    }
    
    int count = 0;
    for (int i=0; i<10; i++)
    {
        if (Red[i] && Blue[i] && Green[i])
        {
            count++;
        }
    }
    
    return count;
}