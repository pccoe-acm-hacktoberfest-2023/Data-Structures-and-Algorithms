class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int>v;
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(it.second>nums.size()/3){
                v.push_back(it.first);
            }

            // if(v.size()==2)break;
        }

            return v;
        
    }
};