int smallestEvenMultiple(int n){

    //check if number is odd or even
    if ((n & 1)==0)
    {
        //number is even
        return n;
    }
    return (n*2);
    
}