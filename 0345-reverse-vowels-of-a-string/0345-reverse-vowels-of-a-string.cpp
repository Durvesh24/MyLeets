class Solution {
public:
    string reverseVowels(string s) {
        vector<char> arr = {'a', 'e', 'i', 'o', 'u'};
        int l = 0, r = s.size();
        while (l < r) {
            if (find(arr.begin(), arr.end(), tolower(s[l])) == arr.end()){
                l++;
            }
            if (find(arr.begin(), arr.end(), tolower(s[r])) == arr.end()){
                r--;
            }
            if(find(arr.begin(), arr.end(), tolower(s[r])) != arr.end() && find(arr.begin(), arr.end(), tolower(s[l])) != arr.end()){
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};