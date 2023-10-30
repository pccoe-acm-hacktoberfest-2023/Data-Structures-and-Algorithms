class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>s1;
        
        for(int i=0;i<nums.size();i++){
            int ans=nums[i];
            int s=i+1;
            int e=nums.size()-1;

            while(s<e){
                if(nums[s]+nums[e]==ans*(-1)){
                    s1.insert({ans,nums[s],nums[e]});
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]<ans*(-1)){
                    s++;
                }
                else{
                    e--;
                }
            }
        }

        for(auto it=s1.begin();it!=s1.end();it++){
            v.push_back(*it);
        }

        return v;
        
    }
};