class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        double rev = 0, rem;
        while (x !=0){
            rem =  x % 10;
            rev = rev *10 + rem;
            x /= 10;
        }
        return original == rev;
    }
    
};