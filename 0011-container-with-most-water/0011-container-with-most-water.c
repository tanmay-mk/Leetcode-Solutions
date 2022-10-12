

int maxArea(int* height, int heightSize){
    
    int max_area = 0;
    int length = 0, breadth = 0, area = 0; 
    
    int i = 0, j = heightSize - 1;
    
    while(i <= j)
    {
        length = j-i;
        breadth = (height[i]<height[j])?height[i]:height[j];
        
        area = length*breadth;
        
        if (max_area < area)
        {
            max_area = area;
        }
        
        if (height[i]<height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    
    return max_area;
}