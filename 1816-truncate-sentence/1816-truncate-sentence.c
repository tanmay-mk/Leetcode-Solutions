char * truncateSentence(char * s, int k){

    int length = strlen(s);
    int idx = 0;
    bool flag = false;
    
    for(int i=0; i<length; i++)
    {
        if (s[i] == ' ')
        {
            k--;
        }
        idx++;
        if(k == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        s[idx-1]='\0';
    }

    return s;
}