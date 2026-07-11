class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> c;
        int n = s.size(); 
        
        for(int i = n - 1; i >= 0; i--){ 
            c.push_back(s[i]); 
        }
        
        for(int i = 0; i < n; i++){ 
            s[i] = c[i]; 
        }
    }
};
