/*
 * Runtime: 8 ms
 * Memory Usage: 10.2 MB
 */

class Solution {
public:
    
   template <class T>
    void splitString(const std::string& str, T& cont)
    {
        std::istringstream iss(str);
        std::copy(std::istream_iterator<std::string>(iss),
             std::istream_iterator<std::string>(),
             std::back_inserter(cont));
    }

    std::string reverseWords(std::string s)
    {
        std::vector<std::string> container = std::vector<std::string>();
        splitString(s, container);
        int tempSize = container.size() - 1;

        s = "";

        for(int i = 0; i < container.size(); i++) {
            s += container[tempSize--];
            if(i + 1 < container.size())
                s += " ";
        }

        return s;
    }
};
