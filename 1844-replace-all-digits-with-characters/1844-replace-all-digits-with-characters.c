char * replaceDigits(char * s){
    
    int len = strlen(s);
    
    for(int i=1; i<len; i+=2)
    {
        int shift = s[i] - '0'; 
        s[i] = s[i-1] + shift; 
    }
    return s;
}