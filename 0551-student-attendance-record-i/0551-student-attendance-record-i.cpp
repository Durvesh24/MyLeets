class Solution {
public:
    bool checkRecord(string s) {
        int late=0;
        int abb=0;
        for(char c:s){
            if(c=='A') {
                abb++;
                late=0;
            }
            else if(c=='L'){
                late++;
            }
            else{
                late=0;
            }
            
            if(late>=3 || abb>=2) return false;
        }
        return true;
    }
};