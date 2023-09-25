bool canConstruct(char * ransomNote, char * magazine){

    int mag[26] = {0};
    
    int noteLen = strlen(ransomNote);
    int magLen = strlen(magazine);
    
    for(int i=0; i<magLen; i++)
    {
        mag[magazine[i]-'a']++;
    }
    
    for(int i=0; i<noteLen; i++)
    {
        if(mag[ransomNote[i]-'a'] <= 0)
        {
            return false;
        }
        else
        {
            mag[ransomNote[i]-'a']--;
        }
    }
    return true;
}