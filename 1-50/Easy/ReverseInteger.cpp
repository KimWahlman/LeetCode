class Solution {
public:
    int reverse(int x) {
        int temp = 0;

        while(x != 0) // Handle both positive and negative integers.
        {
            if(temp > INT_MAX / 10 || temp < INT_MIN / 10) // Handle overflow and underflow
                return 0;

            temp = temp * 10 + x % 10;
            x /= 10;
        }
        
        return temp;
    }
};
