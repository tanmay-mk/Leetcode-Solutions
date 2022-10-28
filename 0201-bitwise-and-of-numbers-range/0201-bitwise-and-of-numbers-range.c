

int rangeBitwiseAnd(int left, int right){

    int result = 0; 
    
    /*The idea is that we shift both numbers to the right, until the numbers become equal, i.e. the numbers are reduced into their common prefix. Then we append zeros to the common prefix in order to obtain the desired result, by shifting the common prefix to the left.*/
    
    while (left < right)
    {
        left >>= 1;
        right >>= 1;
        result++; 
    }
    
    return (left << result);
}