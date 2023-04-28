bool isOdd(char digit)
{
    return (((int) digit % 2) == 1);
}

char * largestOddNumber(char * num){
    int numLen = strlen(num);
    
    for(int i = (numLen-1); i>=0; i--)
    {
        if(isOdd(num[i]) == true)
        {
            return num; 
        }
        else
        {
            num[i] = '\0'; 
        }
    }
    return num;
}