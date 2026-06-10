class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);
        for (char ch : p)
            cnt1[ch - 'a']++;

        int k = p.size();

        for (int i = 0; i < k; i++)
            cnt2[s[i] - 'a']++;

        if (cnt1 == cnt2)
            ans.push_back(0);

        for (int i = k; i < s.size(); i++) {

            cnt2[s[i] - 'a']++;      

            cnt2[s[i - k] - 'a']--;    

            if (cnt1 == cnt2)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
