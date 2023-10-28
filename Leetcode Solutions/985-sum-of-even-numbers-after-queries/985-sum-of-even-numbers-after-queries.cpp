class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int c=0, ind,val,z;
        vector<int> ans;
        for(int i: nums) if(i%2==0) c+=i;
        for(int i=0; i<queries.size(); i++){
            ind = queries[i][1];
            val = queries[i][0];
            if((nums[ind]+val) % 2==0){
                if(nums[ind]%2==0)
                    c += val;
                else
                    c += val+nums[ind];
            }
            else{
                if(nums[ind]%2==0) c -= nums[ind];
            }
            if(c==0)
                ans.push_back(0);
            else  
                ans.push_back(c);
                nums[ind] += val;
        }
        return ans;
    }
};