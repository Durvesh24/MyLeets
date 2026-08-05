class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0, pos=0;
        for(int i : nums){
            if(i<0){neg+=1;}
            else if(i>0){pos+=1;}
        }
        if (pos>neg){return pos;}
        else{return neg;}
    }
};