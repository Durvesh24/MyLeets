class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }

        int a=0, b=0;
        for(int i=1; i<=nums.size(); i++){
            if(mp[i]==2) a=i;
            if(mp[i]==0) b=i;
        }
        return {a,b};
    }
};