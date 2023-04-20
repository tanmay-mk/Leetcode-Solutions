#define INVALID (-1)

bool confusingNumber(int n){
                   //0  1     2        3        4        5     6     7     8  9
    int confuse[] = {0, 1, INVALID, INVALID, INVALID, INVALID, 9, INVALID, 8, 6};
    int temp_n = n; 
    int new = 0; 
    while(n > 0)
    {
        int rem = n%10; 
        if(confuse[rem] == INVALID)
        {
            return false; 
        }
        new = ((new*10) + confuse[rem]); 
        n = n/10;
    }
    return (new != temp_n); 
}