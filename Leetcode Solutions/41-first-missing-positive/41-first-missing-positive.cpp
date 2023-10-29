class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums) m[i]++;
        for(int i=1;; i++){
            if(m[i]==0) return i;
        }
        return -1;
    }
};