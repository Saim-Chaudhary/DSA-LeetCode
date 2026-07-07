class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        int digit = 0;
        long long mul = 1;
        long sum = 0;
        long long ans = 1;
        while(n > 0){
            digit = n % 10;
            if(digit > 0){
                x =  x + (digit * mul);
                sum = sum + digit;
                mul = mul * 10;
            }
            n = n / 10;
        }
        ans = sum * x;
        return ans;
    }
};