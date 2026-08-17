class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax=nums[0];
        int curMin=nums[0];
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++){
            int x=nums[i];
            int tempMax=curMax;

            curMax = max({x, x*curMax, x*curMin});
            curMin = min({x, x*tempMax, x*curMin});
            ans=max(ans, curMax);
        }
        return ans;
    }
};