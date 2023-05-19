#define DETAIL_LENGTH (15)

int countSeniors(char ** details, int detailsSize){

    int seniors = 0; 
    for(int i=0; i<detailsSize; i++)
    {
        int age = ((details[i][DETAIL_LENGTH-4] - '0')*10) + (details[i][DETAIL_LENGTH-3] - '0');
        if (age > 60)
        {
            seniors++; 
        }
    }
    
    return seniors; 
}