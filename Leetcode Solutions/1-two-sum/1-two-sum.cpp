class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i])!=m.end()){
                return vector<int>{m[nums[i]], i};
            }
            m[target-nums[i]] = i;
        }
        return nums;
        // int sum=0,a,b;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j){
        //         sum=nums[i]+nums[j];
        //         if(sum==target){
        //              a=i;
        //              b=j;
        //         }
        //         }
        //     }
        // }
        // return {a,b};
    }
    
};