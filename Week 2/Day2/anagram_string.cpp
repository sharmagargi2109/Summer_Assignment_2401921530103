class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> a;
         if (p.size() > s.size()){
          return a;
         }

        vector<int> pC(26, 0), sC(26, 0);
        for (char c : p) {
            pC[c - 'a']++;
        }

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {

            sC[s[i] - 'a']++;
            if (i >= k) {
                sC[s[i - k] - 'a']--;
            }
            if (sC == pC) {
                a.push_back(i - k + 1);
            }
        }

        return a;
    }
};