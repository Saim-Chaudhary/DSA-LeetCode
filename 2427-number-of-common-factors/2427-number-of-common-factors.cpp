class Solution {
public:
    int commonFactors(int a, int b) {
        int loop = min(a, b);
        vector<int> arr;
        for(int i = 1; i <= loop; i++){
            if(a % i == 0 && b % i == 0){
                arr.push_back(i);
            }
        }
        return arr.size();
    }
};