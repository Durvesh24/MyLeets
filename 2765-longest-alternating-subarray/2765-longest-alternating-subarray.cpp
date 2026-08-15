class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=-1;
        for(int r=0; r<nums.size()-1; r++){
            if (nums[r + 1] - nums[r] != 1)
                continue;

            int lnt = 2;
            int exp = -1;
            for (int j = r + 1; j < nums.size() - 1; j++) {
                if (nums[j + 1] - nums[j] == exp) {
                    lnt++;
                    exp *= -1;
                } else {
                    break;
                }
            }
            ans = max(ans, lnt);
        }
        return ans;
    }
};