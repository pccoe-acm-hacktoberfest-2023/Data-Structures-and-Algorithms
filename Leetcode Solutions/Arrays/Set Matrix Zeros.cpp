class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
            int r=a.size();
            int c=a[0].size();

            vector<int>x,y;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(a[i][j]==0){
                        x.push_back(i);
                        y.push_back(j);
                    }
                }
            }

            for(auto row:x){
                for(int col=0;col<c;col++){
                    a[row][col]=0;
                }
            }

              for(auto col:y){
                for(int row=0;row<r;row++){
                    a[row][col]=0;
                }
            }

    }
    
};