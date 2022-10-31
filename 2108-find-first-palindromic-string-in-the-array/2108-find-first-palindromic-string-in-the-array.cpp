class Solution {
public:
    
    bool isPalindrome (string word)
    {
        int wordSize = word.size();
        string temp = word; 
        
        for(int i = 0; i<wordSize/2; i++)
        {
            temp[i] ^= temp[wordSize - i - 1];
            temp[wordSize - i - 1] ^= temp[i];  
            temp[i] ^= temp[wordSize - i - 1];
        }
        
        if (temp == word)
        {
            return true;
        }
        
        return false; 
    }
    
    string firstPalindrome(vector<string>& words) {
        
        int wordsSize = words.size();
        
        for(int i = 0; i<wordsSize; i++)
        {
            if (isPalindrome(words[i]) == true)
            {
                return words[i];
            }
        }  
        
        return "";
    }
};