class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> arr(nums.size());
        int l=0;
        int r=nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                arr[l]=nums[i];
                l+=2;
            }
            else{
                arr[r]=nums[i];
                r-=2;
            }
        }
        return arr;
    }
};
// u doing it 1st ?? okii