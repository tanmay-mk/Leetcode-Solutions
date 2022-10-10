

int numberOfSteps(int num){

    int steps = 0;
    
    while (num > 0)
    {
        /*check if number is odd* or even*/
        if (num & 1 != 0)
        {
            //number is odd, subtract 1
            num--;
        }
        else
        {   
            //number is even, divide by 2
            num = num >> 1; //equivalent to division by 2
        }
        steps++;
    }
    
    
    return steps; 
    
}