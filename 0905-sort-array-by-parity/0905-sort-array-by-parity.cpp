class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> arr(nums.size());
        int l=0, r=nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                arr[l]=nums[i];
                l++;
            }
            else{
                arr[r]=nums[i];
                r--;
            }
        }
        return arr;
    }
};
//18% acceptance :) nai 100 ani 99.96 mala nai ala nai honar aree u wanna append even adhi odd nantr ohh wait l and r act as pointers ?? wait