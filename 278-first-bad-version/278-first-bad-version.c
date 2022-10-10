// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    unsigned int start = 0, end = n, mid;
    
    mid = (start+end)/2;
    
    while (start <= end)
    {
        if (!isBadVersion(mid))
        {
            start = mid+1;
        }
        else 
        {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return mid+1;
}