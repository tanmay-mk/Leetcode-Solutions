void shift_right(char *s, int itr)
{
    int len = strlen(s);
    for(int j=0; j<itr; j++)
    {
        char temp = s[len-1]; 
        for(int i=len-1; i>= 1; i--)
        {
            s[i] = s[i-1]; 
        }
        s[0] = temp; 
    }
}

void shift_left(char *s, int itr)
{
    int len = strlen(s);
    for(int j=0; j<itr; j++)
    {
        char temp = s[0]; 
        for(int i=0; i < len-1; i++)
        {
            s[i] = s[i+1]; 
        }
        s[len-1] = temp; 
    }
}


char * stringShift(char * s, int** shift, int shiftSize, int* shiftColSize){

    for(int i=0; i<shiftSize; i++)
    {
        if(shift[i][0] == 0)
        {
            shift_left(s, shift[i][1]);
        }
        else
        {
            //right shift
            shift_right(s, shift[i][1]);
        }
    }
    return s; 
}