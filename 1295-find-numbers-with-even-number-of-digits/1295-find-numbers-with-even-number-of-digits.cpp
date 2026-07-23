class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ev = 0;
        for(int i:nums){
            string st = to_string(i);
            if (st.length()%2 == 0){
                ev += 1;
            }
        }
        return ev;
    }
};