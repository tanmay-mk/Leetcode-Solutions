#define IS_VOWEL(c) ((c == 'a')? true : ((c=='e')? true : ((c=='i')? true : ((c == 'o')? true : ((c == 'u')? true : false)))))

// bool isVowel(char c)
// {
//     switch(c)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             return true; 
//         break; 
            
//         default:
//         break; 
//     }
//     return false; 
// }

int vowelStrings(char ** words, int wordsSize, int left, int right){

    int count = 0; 
    for(int i=left; i<=right; i++)
    {
        int len = strlen(words[i]); 
        
        if(IS_VOWEL(words[i][0]) && IS_VOWEL(words[i][len-1]))
        {
            count++; 
        }
    }
    return count; 
}