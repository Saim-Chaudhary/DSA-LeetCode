class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int n : nums1){
            s1.insert(n);
        }
        for(int m : nums2){
            if(s1.count(m)){
                s2.insert(m);
            }
        }
        return vector<int>(s2.begin(), s2.end());
    }
};