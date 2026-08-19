class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int skip;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
                skip = i;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(i==skip) continue;
            if(nums[i]*2 > max) return -1;
        }
        return skip;
    }
};