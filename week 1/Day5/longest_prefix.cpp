class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string a = strs[0];

        for(int i = 1; i < strs.size(); i++)
         {

            while(strs[i].find(a) != 0)
             {
                a.pop_back();
            }
        }

        return a;
    }
};