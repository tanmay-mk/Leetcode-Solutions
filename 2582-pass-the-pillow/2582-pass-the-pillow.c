int passThePillow(int n, int time){

    int num = 1; 
    bool dir = false; //false ascending, true descending
    
    while(time > 0)
    {
        if(dir == false)
        {
            num++;
        }
        else
        {
            num--; 
        }
        
        if(dir == false && num == n)
        {
            dir = true; 
        }
        else if (dir == true && num == 1)
        {
            dir = false; 
        }
        time--; 
    }
    return num; 
}