class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

            vector<int>num(m+n,0);

            int a=0;
            int b=0;
            int i=0;
            
            while(a<m && b<n){
                if(nums1[a]<nums2[b]){
                    num[i]=nums1[a];
                    a++;
                    i++;
                }
                else {
                    num[i]=nums2[b];
                    b++;
                    i++;
                }

               

            }

            while(a<m){
                 num[i]=nums1[a];
                    a++;
                    i++;
            }

            while(b<n){
                 num[i]=nums2[b];
                    b++;
                    i++;
            }

            nums1=num;

    }
};