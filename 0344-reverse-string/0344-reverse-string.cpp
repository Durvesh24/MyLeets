class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> rev=s;
        int n = s.size();
        for(int i=n-1; i>=0; i--){
            s[n-1-i] = rev[i];
        }
    }
};