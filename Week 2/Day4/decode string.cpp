class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
      string solve(string &s, int &i) {
        string result = "";
        int num = 0;

        while (i < s.length()) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                i++;
                string temp = solve(s, i);

                while (num--) {
                    result += temp;
                }
                num = 0;
            }
            else if (s[i] == ']') {
                return result;
            }
            else {
                result += s[i];
            }

            i++;
        }

        return result;
    }
};