#include <math.h>

int reverse(int x){
    
    long int temp_x = x;
    long int result=0;
    int remainder;

    int pos_range, neg_range;
    
    pos_range = pow(2,31);
    
    neg_range = pow(2,31);
    neg_range *= -1;
    neg_range -= 1;
    
    if (x < 0)
    {
        temp_x *= -1;
    }
    
    while (temp_x>0)
    {
        remainder = temp_x%10;
        result = ((result*10)+remainder);
        temp_x/=10;
    }

    if (x < 0)
    {
        result *= -1;
    }

    if (result > pos_range || result < neg_range)
    {
        return 0;
    }
    
    return result;  
}