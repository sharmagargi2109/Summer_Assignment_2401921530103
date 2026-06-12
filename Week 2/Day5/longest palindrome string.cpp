class Solution {
public:
    int start = 0;
    int maxL = 0;

    void expand(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        int len = right - left - 1;
       if (len > maxL) {
            maxL= len;
            start = left + 1;
        }
    }
 string longestPalindrome(string s) {

        for (int i = 0; i < s.length(); i++) {
            expand(s, i, i);       
            expand(s, i, i + 1); 
        }

        return s.substr(start, maxL);
    }
};