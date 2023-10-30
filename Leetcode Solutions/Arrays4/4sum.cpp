class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>s1;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int ans=nums[i]+nums[j];
                int s=j+1;
                int e=n-1;

                while(s<e){
                    if(nums[s]+nums[e]==target-ans){
                        s1.insert({nums[i],nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                    }

                    else if(nums[s]+nums[e]<target-ans){
                        s++;
                    }
                    else {
                        e--;
                    }
                }
            }
        }

        for(auto it=s1.begin();it!=s1.end();it++){
            v.push_back(*it);
        }

        return v;

        
    }
};