char * convertToBase7(int num){
    
    //start with 1 byte memory allocation
    int size=1; 
    char* str = (char*)malloc(sizeof(char)*size);
    int idx = 0; 
    bool minus = false;
    if (num < 0)
    {
        minus = true; 
        num = num*-1; 
    }
    
    //fill in first number
    str[idx++] = '0'+ (num%7);
    num /= 7; 
    
    while(num > 0)
    {
        size++;
        str = (char*)realloc(str, size*sizeof(char));
        str[idx++] = '0'+ num % 7;
        num /= 7; 
    }
    if (minus == true)
    {
        size++;
        str = (char*)realloc(str, size*sizeof(char));
        str[idx++] = '-';
    }
    size++;
    str = (char*)realloc(str, size*sizeof(char));
    str[idx++] = '\0';
    
    for(int i=0; i<((size-1)/2); i++)
    {
        str[i] ^= str[size-i-2];
        str[size-i-2] ^= str[i];
        str[i] ^= str[size-i-2];
    }
    return str;
}