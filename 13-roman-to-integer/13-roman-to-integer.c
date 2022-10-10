

int romanToInt(char * s){

    int result = 0;
    int temp_val = 0;
    
    int count = 0;
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
    
    for (int i = 0; i < count; i++)
    {
        if (s[i] == 'i' || s[i] == 'I')
        {
            if (   
                   s[i+1] == 'v' 
                || s[i+1] == 'V'
                || s[i+1] == 'x'
                || s[i+1] == 'X'
               )
            {
                temp_val = -1;
            }
            else
            {
                temp_val = 1;
            }
        }
        
        if (s[i] == 'v' || s[i] == 'V')
        {
            temp_val = 5;
        }
        
        if (s[i] == 'x' || s[i] == 'X')
        {
            if (   
                   s[i+1] == 'l' 
                || s[i+1] == 'L'
                || s[i+1] == 'c'
                || s[i+1] == 'C'
               )
            {
                temp_val = -10;
            }
            else
            {
                temp_val = 10;
            }
        }
        
        if (s[i] == 'l' || s[i] == 'L')
        {
            temp_val = 50;
        }
        
        if (s[i] == 'c' || s[i] == 'C')
        {
            if (   
                   s[i+1] == 'd' 
                || s[i+1] == 'D'
                || s[i+1] == 'm'
                || s[i+1] == 'M'
               )
            {
                temp_val = -100;
            }
            else
            {
                temp_val = 100; 
            }
        }
        
        if (s[i] == 'd' || s[i] == 'D')
        {
            temp_val = 500;
        }
        
        if (s[i] == 'm' || s[i] == 'M')
        {
            temp_val = 1000;
        }
        
        result += temp_val;
    }
    
    return result;
}