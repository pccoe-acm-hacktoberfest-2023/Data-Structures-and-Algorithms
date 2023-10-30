class Solution {
public:
    void nextPermutation(vector<int>& nums) {

            int inft=0;
            int n=nums.size()-1;

            for(int i=n;i>0;i--){
                if(nums[i]>nums[i-1]){
                    inft=i;
                    break;
                }
            }

            if(inft==0){
                sort(nums.begin(),nums.end());
            }
            else{
                int min=INT_MAX;
                int toswap=nums[inft-1];
                for(int i=inft;i<=n;i++){
                    if(nums[i]-toswap>0 && nums[i]-toswap<min){
                        int temp=nums[i];
                        nums[i]=nums[inft-1];
                        nums[inft-1]=temp;
                    }
                }

                sort(nums.begin()+inft,nums.end());
            }

            

            
    }
};