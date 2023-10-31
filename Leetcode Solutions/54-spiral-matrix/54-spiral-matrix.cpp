 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        int total=row*col;
        int count=0;
        while(count<total)
        {
           for(int i=startingcol;i<=endingcol && count<total;i++){
             ans.push_back(matrix[startingrow][i]);
               count++;
           }
           startingrow++;
         

             for(int i=startingrow;i<=endingrow && count<total;i++){
             ans.push_back(matrix[i][endingcol]);
              count++;
           }
           endingcol--;
           

             for(int i=endingcol;i>=startingcol && count<total;i--){
             ans.push_back(matrix[endingrow][i]);
              count++;
           }
           endingrow--;

             for(int i=endingrow;i>=startingrow && count<total;i--){
             ans.push_back(matrix[i][startingcol]);
              count++;
           }
           startingcol++;
        }
        return ans;
    }
