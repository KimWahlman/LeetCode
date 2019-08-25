/* 
 * Runtime: 0 ms
 * Memory Usage: 8.2 MB
 */
 
class Solution 
{
public:
    // Find sqrt by using binary search.
    int mySqrt(int x) 
    {
        long    startIndex = 0, 
                endIndex = x;
        
        // If endIndex^2 is equal to x, we have found sqrt(x).
        if(std::pow(endIndex, 2) == x)
            return (int) endIndex;
        
        while(startIndex + 1 < endIndex) {
            long pivot = startIndex + (endIndex - startIndex) / 2; // (endIndex - startIndex) helps to prevents overflow.
            if(std::pow(pivot, 2) == x)
                return (int) pivot;
            else if(std::pow(pivot, 2) < x)
                startIndex = pivot;
            else
                endIndex = pivot;
        }
        
        return (int) startIndex;
    }
};
