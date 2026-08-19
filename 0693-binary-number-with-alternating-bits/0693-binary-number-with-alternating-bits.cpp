class Solution {
public:
    bool hasAlternatingBits(int n) {
        int priv =n%2;
        n=n/2;
        while(n>0){
            int curr=n%2;
            n=n/2;
            if(curr==priv) return false;
            priv=curr;
        }
        return true;
    }
};