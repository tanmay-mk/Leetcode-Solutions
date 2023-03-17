#define NORTH   (y++)
#define SOUTH   (y--)
#define EAST    (x++)
#define WEST    (x--)

typedef struct xyPlane
{
    int x; 
    int y; 
}xy_t;


bool isPathCrossing(char * path){

    int x = 0, y = 0; 
    int idx = 0; 
    int pts_visited = 1; // (0, 0) 
    xy_t **prev_locations = (xy_t **)malloc(sizeof(xy_t *)*pts_visited);
    prev_locations[idx] = (xy_t *)malloc(sizeof(xy_t)); 
    prev_locations[idx]->x = 0; prev_locations[idx]->y = 0; 
    idx++;
    
    int pathLen = strlen(path);
    
    for(int i=0; i<pathLen; i++)
    {
        switch(path[i])
        {
            case 'N':
                NORTH; 
            break;
                
            case 'S':
                SOUTH; 
            break;
                
            case 'E':
                EAST; 
            break;
                
            case 'W':
                WEST; 
            break;
        }
        pts_visited++; 
        prev_locations = (xy_t **)realloc(prev_locations, (sizeof(xy_t *)*pts_visited));
        prev_locations[idx] = (xy_t *)malloc(sizeof(xy_t));
        prev_locations[idx]->x = x; prev_locations[idx]->y = y;  
        idx++; 
    }
    
    bool same = false; 
    for(int i=0; i<pts_visited; i++)
    {
        for(int j=i+1; j<pts_visited; j++)
        {
            if(memcmp(prev_locations[i], prev_locations[j], sizeof(xy_t)) == 0)
            {
                same = true; 
                break; 
            }
        }
    }
    
    for(int i=0; i<pts_visited; i++)
    {
        free(prev_locations[i]); 
    }
    free(prev_locations); 
    
    return same; 
}