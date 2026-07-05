class Solution {
public:
    string reverseStr(string s, int k) {
        int step = 2 * k;
        int n = s.length() - 1;
        for(int i = 0; i < n; i += step){
            int start = i;
            int end = min(i + k - 1, (int)s.length() -1);
            while(start < end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};