#define UP (y++)
#define DOWN (y--)
#define LEFT (x--)
#define RIGHT (x++)

bool judgeCircle(char * moves){

    int x=0, y=0;
    int len = strlen(moves);    
    for(int i=0; i<len; i++)
    {
        switch(moves[i])
        {
            case 'U': UP; break; 
            case 'D': DOWN; break; 
            case 'L': LEFT; break;
            case 'R': RIGHT; break;
        }
    }
    return (x == 0 && y == 0); 
}