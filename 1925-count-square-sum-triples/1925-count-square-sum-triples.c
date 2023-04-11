int countTriples(int n){
    int count = 0; 
    
    for(int c=1; c<=n; c++)
    {
        int csqr = (c*c); 
        for(int a=1; a<=n; a++)
        {
            int asqr = (a*a); 
            for(int b=1; b<=n; b++)
            {
                int bsqr = (b*b); 
                if((asqr+bsqr)==csqr)
                {
                    count++; 
                }
            }
        }
    }
    return count; 
}