/*
 * Runtime: 0 ms
 * Memory Usage: 8.1 MB
 */
 
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution 
{
public:
    int guessNumber(int n) 
    {
        int pivot, 
            left = 0, 
            right = n;
        
        while(left <= right) {
            pivot = left + (right - left) / 2;
            int myGuess = guess(pivot);
            if(myGuess == 0) 
                return pivot;
            else if(myGuess < 0) 
                right = pivot - 1;
            else 
                left = pivot + 1;
        }
        
        return -1;
    }
};
