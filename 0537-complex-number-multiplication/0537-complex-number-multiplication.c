char * complexNumberMultiply(char * num1, char * num2){

    int r1, i1, r2, i2; 
    
    sscanf(num1, "%d+%di", &r1, &i1);
    sscanf(num2, "%d+%di", &r2, &i2);
    
    int rans = 0, ians = 0;
    
    rans = ((r1*r2) - (i1*i2));
    ians = ((r1*i2) + (r2*i1));
    
    char *ans = (char *)malloc(sizeof(char)*1000);
    memset(ans, 0, sizeof(char)*1000);
    
    sprintf(ans, "%d+%di", rans, ians);
    
    return ans;
    
}