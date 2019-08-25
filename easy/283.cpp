class Solution 
{
public:
    void moveZeroes(vector<int>& vec) 
    {
       	// Keep a track of the number of zeroes.
        int zeroes = 0;
        for (unsigned int i = 0; i < vec.size(); i++)
            zeroes += (vec[i] == 0);

        // Store the non-zeroes in a new vector first.
        std::vector<int> res;
        for (unsigned int i = 0; i < vec.size(); i++)
            if (vec[i] != 0)
                res.push_back(vec[i]);

        // Replace 'vec' current values with those in 'res'.
        vec = res;

        // Last but not least push X number of zeroes into the original vector 
        for (int i = 0; i < zeroes; i++)
            vec.push_back(0);
    }
};
