class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        int j=0;
        int z=0;
        for(int i=2; i<nums.size(); i++){
            if(arr1[j]>arr2[z]){
                arr1.push_back(nums[i]);
                j++;
            }
            else{
                arr2.push_back(nums[i]);
                z++;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};