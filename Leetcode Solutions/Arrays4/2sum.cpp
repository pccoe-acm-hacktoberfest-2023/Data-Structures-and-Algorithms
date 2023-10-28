class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()<2)
            return nums;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                return {mp[target-nums[i]],i};
            }
        }
        return nums;
        
    }
};