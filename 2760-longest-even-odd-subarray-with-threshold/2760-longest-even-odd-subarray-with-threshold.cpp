class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans=0;
        for(int l=0; l<nums.size(); l++){
            if((nums[l]%2 != 0) | nums[l]>threshold) continue;

            int len=1;

            for(int r=l; r<nums.size()-1; r++){
                if((nums[r]%2 != nums[r+1]%2) & nums[r+1]<=threshold){
                    len+=1;
                }
                else break;
            } 
            ans = max(ans,len);
        }
        return ans;
    }
};