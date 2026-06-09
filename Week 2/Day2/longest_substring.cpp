class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int l = 0;
        int maxLen = 0;
        for (int r = 0; r < s.length(); r++) {
             while (str.count(s[r])) {
                str.erase(s[l]);
                l++;
            }
            str.insert(s[r]);
         maxLen = max(maxLen, r - l + 1);
        }
         return maxLen;
    }
};