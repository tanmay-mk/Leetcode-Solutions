char * removeVowels(char * str){

    int length = strlen(str); 
    for(int i=0; i<length; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            for(int j=i; j<length; j++)
            {
                str[j] = str[j+1];
            }
            str[length-1] = '\0';
            length--; i--;
        }
    }
    return str;
}