class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
         int half = n/2;
        // no. of +ve == no. of -ve
         while(half>0){
             ans.push_back(half);
             ans.push_back(-half);
             half--;
        }
        // add 0 is odd
        if(n%2!=0)
            ans.push_back(0);
        return ans;
    }
};