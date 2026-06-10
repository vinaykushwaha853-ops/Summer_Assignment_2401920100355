class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
