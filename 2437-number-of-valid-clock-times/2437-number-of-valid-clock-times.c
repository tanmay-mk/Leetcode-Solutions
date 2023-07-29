int countTime(char * time){

    int combo = 1; 
    
    for(int i=0; i<5; i++)
    {
        switch(time[i])
        {
            case '?':
                switch(i)
                {
                    case 0:
                        if(time[1] >= '4')
                        {
                            combo *= 2; 
                        }
                        else
                        {
                            combo *= 3; 
                        }
                    break;
                        
                    case 1:
                        if(time[0] == '?')
                        {
                            combo = 24; 
                        }
                        else if(time[0] == '2')
                        {
                            combo *= 4; 
                        }
                        else
                        {
                            combo *= 10;                          
                        }

                    break;
                        
                    case 3:
                        combo *= 6;
                    break;
                        
                    case 4:
                        combo *= 10; 
                    break;
                }
            break; 
                
            default: 
            break; 
        }
    }
    return combo; 
}