class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0, mul=1, id;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) mul *= nums[i];
            else {
                c++;
                if(c>1) break;
                id=i;
            }
        }
        if(c > 0) {
            fill(nums.begin(), nums.end(), 0);
            if(c==1) {
                nums[id] = mul;
            }
        }
        else{
            for(int i=0; i<nums.size(); i++){
                nums[i] = mul/nums[i];
            }
        }
        return nums;
    }
};