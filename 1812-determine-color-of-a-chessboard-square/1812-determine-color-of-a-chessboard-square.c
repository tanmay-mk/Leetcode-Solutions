
bool squareIsWhite(char * coordinates){

    //add ascii value of each square
    //for example, for "a1", add 'a' & '1' = 97 + 1 = 98
    //even sum = black square, odd sum = white square
    
    if (((coordinates[0] + coordinates[1]) & 1) == 0)
    {
        return false; 
    }
    return true; 
}