class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int max = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==1){
                cnt += 1;
            }
            else{
                if (cnt>max){
                    max = cnt;
                }
                cnt = 0;
            }
        }
        if (cnt>max){max=cnt;}
        return max;
    }
};