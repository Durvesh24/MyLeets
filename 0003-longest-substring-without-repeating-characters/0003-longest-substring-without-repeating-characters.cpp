class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int l=0;
        unordered_set<int> seen;
        for(int i=0; i<s.size(); i++){
            while(seen.count(s[i])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[i]);
            ans=max(ans, i-l+1);
        }
        return ans;
    }
};