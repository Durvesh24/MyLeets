class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = 1;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum<min && sum!=0){
                min = sum;
            }
        }
        if(min<0){
            return -min+1;
        }
        else{
            return min;
        }
    }
};