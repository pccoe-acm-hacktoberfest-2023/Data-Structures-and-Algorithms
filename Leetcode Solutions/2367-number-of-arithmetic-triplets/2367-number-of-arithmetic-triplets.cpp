// int bsearch(vector<int>& nums,int target,int start){
//     int h=nums.size()-1;
//     int l=start, m;
//     while(l<=h){
//         m = l + (h-l)/2;
//         if(nums[m] == target) return 1;
//         else if(nums[m] < target) l = m+1;
//         else h = m-1;
        
//     }
//     return 0;
// }
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // binary search method
        // int ans=0;
        // for(int i=0; i<=nums.size()-3; i++){
        //     if(bsearch(nums, nums[i]+diff, i+1) && bsearch(nums, nums[i]+(2*diff), i+1)){
        //         ans++;
        //     }
        // }
        // return ans;
        map<int, int>m;
        int c=0;
        for(int i: nums) m[i]++;
        for(int i: nums){
            if(m[i+diff]>0 && m[i+2*diff]>0){
                c++;
            }
        }
        return c;
    }
};