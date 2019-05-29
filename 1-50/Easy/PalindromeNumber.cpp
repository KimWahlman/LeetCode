class Solution {
public:
    int reverseInt(int x)
    {
        if(x < 0)
            return 0;
        
        int temp = 0;
        
        while(x != 0)
        {
            if(temp > INT_MAX / 10)
                return 0;
            temp = temp * 10 + x % 10;
            x /= 10;
        }
        return temp;
    }
    
    bool isPalindrome(int x) 
    {
        int y = reverseInt(x);
        if(y == x)
            return true;
        return false;
    }
};
