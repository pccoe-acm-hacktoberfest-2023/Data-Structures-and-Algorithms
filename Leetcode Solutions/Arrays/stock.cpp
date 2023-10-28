class Solution {
public:
    int maxProfit(vector<int>& arr) {
            int n=arr.size();
            int profit=0;
            int x=arr[0];
            for(int i=0;i<n;i++){
                    if(x>arr[i]){
                        x=arr[i];
                    }

                    int z=arr[i]-x;
                    profit=max(profit,z);
            }

            return profit;
    }
};