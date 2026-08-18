class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i=left; i<=right; i++){
            int num = i;
            bool valid=true;

            while(num>0){
                int l = num%10;
                num=num/10;
                if(l==0) {valid=false; break;}

                if(i%l!=0) {valid=false; break;}
            }
            if(valid) ans.push_back(i);
        }
        return ans;
    }
};