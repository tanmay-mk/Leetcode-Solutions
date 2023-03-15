#define MIN(A,B) ((A < B)?A:B)

/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

/**
 * @param buf Destination buffer
 * @param n   Number of characters to read
 * @return    The number of actual characters read
 */
int _read(char* buf, int n) {
    
    int chars = 0; 
    
    while(chars < n)
    {
        int numChars = read4(buf+chars); 
        chars += numChars; 
        if(numChars < 4)
        {
            break;
        }
    }
    return MIN(chars, n); 
}