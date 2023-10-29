class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto i : nums2) nums1.push_back(i);
        sort(nums1.begin(), nums1.end());
        if(nums1.size()%2==0){
            return 1.0*(nums1[nums1.size()/2-1]+nums1[nums1.size()/2])/2;
        }
        return nums1[nums1.size()/2];
    }
};