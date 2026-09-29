class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> mp1;
        for(char ch:magazine){
            mp1[ch]++;
        }

        for(char c:ransomNote){
            if(mp1[c]<=0){
                return false;
            }
            mp1[c]--;
        }
        return true;
    }
};
