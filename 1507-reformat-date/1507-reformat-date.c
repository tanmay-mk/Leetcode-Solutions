char * reformatDate(char * date){
    
    char *nDate = (char *)malloc(sizeof(char)*11); 
    
    int dLen = strlen(date);
    
    
    //[0][1][2][3][4][5][6][7][8][9]
    //[Y][Y][Y][Y][-][M][M][-][D][D]
    
    nDate[0] = date[dLen-4]; 
    nDate[1] = date[dLen-3]; 
    nDate[2] = date[dLen-2]; 
    nDate[3] = date[dLen-1];
    nDate[4] = '-';
    
    //get and process month
    int idx=0;
    while (!(date[idx] >= 'A' && date[idx] <= 'Z'))
    {
        idx++; 
    }
    
    switch(date[idx])
    {
        //check for Jan, Jun or Jul
        case 'J':
            if(date[idx+1] == 'a')
            {
                nDate[5] = '0';
                nDate[6] = '1'; 
            }
            else if(date[idx+1] == 'u')
            {
                if(date[idx+2] == 'n')
                {
                    nDate[5] = '0';
                    nDate[6] = '6';
                }
                else
                {
                    nDate[5] = '0';
                    nDate[6] = '7';
                }
            }
        break; 
        
        case 'F': // February 
            nDate[5] = '0';
            nDate[6] = '2';  
        break; 
            
        case 'M': //March or May
            if(date[idx+1] == 'a' && date[idx+2] == 'r')
            {
                nDate[5] = '0';
                nDate[6] = '3'; 
            }  
            else
            {
                nDate[5] = '0';
                nDate[6] = '5';                 
            }
        break;     
        
        case 'A': //Apr or Aug
            if(date[idx+1] == 'p')
            {
                nDate[5] = '0';
                nDate[6] = '4'; 
            }  
            else
            {
                nDate[5] = '0';
                nDate[6] = '8';                 
            }
        break;  
            
        case 'S': // Sept 
            nDate[5] = '0';
            nDate[6] = '9';  
        break;
            
        case 'O': // Oct 
            nDate[5] = '1';
            nDate[6] = '0';  
        break;
            
        case 'N': // Nov 
            nDate[5] = '1';
            nDate[6] = '1';  
        break;
            
        case 'D': // Dec 
            nDate[5] = '1';
            nDate[6] = '2';  
        break;
        
        default: 
        break;
    }
    nDate[7] = '-'; 
    
    //get & process date
    int dt = 0; 
    for(int i=0; i<4; i++)
    {
        if(date[i] >= '0' && date[i] <= '9')
        {
            dt = (dt*10) + (date[i] - '0');
        }
        else
        {
            break; 
        }
    }
    
    nDate[9] = (dt % 10) + '0';
    dt /= 10; 
    nDate[8] = (dt % 10) + '0';
    nDate[10] = '\0';
    
    return nDate; 
}