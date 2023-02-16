bool isSameAfterReversals(int num){

    int orig = num, rev1=0, rev2=0;
    
    while(num > 0)
    {
        int rem = num % 10; 
        rev1 = (10*rev1) + rem;
        num = num/10;
    }
    
    while(rev1 > 0)
    {
        int rem = rev1 % 10; 
        rev2 = (10*rev2) + rem;
        rev1 = rev1/10;
    }
    
    if (rev2 == orig)
    {
        return true;
    }
    return false;
}