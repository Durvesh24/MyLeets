class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }

        int pre=0, post=0;
        for(int i=0; i<n; i++){
            post = sum - nums[i] - pre;
            if(pre==post) return i;
            pre+=nums[i]; 
        }
        return -1;
    }
};