class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int min = 0;
        vector<int> ans;
        bool islucky;
        for(int i=0; i<matrix.size(); i++){
            islucky=true;
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][min] > matrix[i][j]){
                    min = j;
                }
            }
            for(int j=0; j<matrix.size(); j++){
                if(matrix[i][min] < matrix[j][min]){
                    islucky=false;
                }
            }
            if(islucky) ans.push_back(matrix[i][min]);
        }
        return ans;
    }
};