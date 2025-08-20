class Solution {
public:
    bool isPalindrome(int x) {
    
        if (x < 0) return false;
        std::string str_number = std::to_string(x);

        for (int i = 0, j = str_number.length() - 1; i < j; i++, j--) {
            if (str_number[i] != str_number[j]) 
                return false;
        }

        return true;
    }
};
