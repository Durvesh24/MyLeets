class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x=0;
        int m=0;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                x++;
            }
            else{
                m=max(m, x);
                x=0;
            }
        }
        m=max(m, x);
        return m;
    }
};