#define MAX(a,b) ((a>b)? a : b)

bool checkZeroOnes(char * s){

    int len=strlen(s);
    int this1len=0, this0len=0, max1len=0, max0len=0; 
    
    (s[0] == '0')? this0len++ : this1len++;
    (s[0] == '0')? max0len++ : max1len++;
    
    for(int i=1; i<len; i++)
    {
        if(s[i] == '1')
        {
            this1len++;
            this0len = 0; 
            max1len = MAX(this1len, max1len);
        }
        else
        {
            this0len++;
            this1len = 0; 
            max0len = MAX(this0len, max0len);
        }
    }
    
    return (max1len > max0len);
}