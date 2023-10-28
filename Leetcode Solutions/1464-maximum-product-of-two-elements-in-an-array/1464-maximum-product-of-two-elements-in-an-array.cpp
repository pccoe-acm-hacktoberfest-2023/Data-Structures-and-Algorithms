class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max =0, t;
        for(int i=0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                t = (nums[i]-1)*(nums[j]-1);
                    max = t>max?t:max;
            }
        }
        return max;
    }
};