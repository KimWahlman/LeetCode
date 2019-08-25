class Solution {
public:
    string toLowerCase(string str) {
		int counter = 0;
        for(auto i : str) {
            char y = (int)i;
            if ((int)str[counter] >= 65 && (int)str[counter] <= 90) {
                y += 32;
            }
            str[counter++] = y;
        }
        return str;
    }
};  
