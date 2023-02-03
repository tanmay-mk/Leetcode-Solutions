int titleToNumber(char * columnTitle){

    int length = strlen(columnTitle);

    int sum = 0; 
    int tempLength = length;  
    
    for(int i=0; i<length; i++)
    {
        sum += ((columnTitle[i] - 'A' + 1)*pow(26, --tempLength));
    }
    
    return sum;
}