

int countGoodRectangles(int** rectangles, int rectanglesSize, int* rectanglesColSize){

        int count = 0;
        int max = 0;

        int *minSides = (int *)malloc(sizeof(int)*rectanglesSize);

        /*get smallest side of each rectangle*/
        for(int i=0; i<rectanglesSize; i++)
        {
            int min = 0; 
            min = (rectangles[i][0] < rectangles[i][1])? rectangles[i][0] : rectangles[i][1]; 
            minSides[i] = min;
            if(max < min)
            {
                max = min;
            }
        }

        for(int i = 0; i<rectanglesSize; i++)
        {
            if(minSides[i] == max)
            {
                count++;
            }
        }
    
    free(minSides);
        return count; 
}