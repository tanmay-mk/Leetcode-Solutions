bool isPalindrome(char *str)
{
    int len = strlen(str);
    
    for(int i=0; i<len/2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true; 
}

char *calculate_base(int n, char* str, int base)
{
    int idx = 0;
    while(n > 0)
    {
        int rem = n % base; 
        str[idx++] = '0' + rem;
        n /= base; 
    }
    
    for (int i=0; i<idx/2; i++)
    {
        str[i] ^= str[idx - i - 1];
        str[idx - i - 1] ^= str[i];
        str[i] ^= str[idx - i - 1];
    }
    return str; 
}

bool isStrictlyPalindromic(int n){

    char str[100];
    memset(str, 0, (sizeof(char)*100));
    
    for(int i = 2; i <= (n-2); i++)
    {
        calculate_base(n, str, i);
        if (isPalindrome(str) == false)
        {
            return false;
        }
        memset(str, 0, (sizeof(char)*100));
    }
    return true; 
}