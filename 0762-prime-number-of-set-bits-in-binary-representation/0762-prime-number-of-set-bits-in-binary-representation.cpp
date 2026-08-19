class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int ans=0;
    int countPrimeSetBits(int left, int right) {
        for(int i=left; i<=right; i++){
            int count=0;
            int num = i;
            while(num>0){
                count+=num%2;
                num=num/2;
            }
            if(isPrime(count)){
                ans++;
            }
        }
        return ans;
    }
};