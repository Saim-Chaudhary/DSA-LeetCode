class Solution {
public:
    int findComplement(int num) {
        if(num == 0) return 1;

        int copy = num;
        int mask = 0;
        while(num != 0){
            mask = (mask << 1) | 1;
            num = num >> 1;
        }
        int answer = (~copy) & mask;
        return answer;
    }
};