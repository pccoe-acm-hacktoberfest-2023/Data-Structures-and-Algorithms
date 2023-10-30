class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {


            int n=0;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                    count++;

                }
                
                n=max(count,n);
                if(nums[i]==0){
                    
                    count=0;
                }
            }

            return n;
       
    }
};