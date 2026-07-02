class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>p;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    p.push_back({i,j});
                }
            }
        }
        for(auto[x,y]:p){
            for(int i=0;i<m;i++){
               for(int j=0;j<n;j++){
                  if(i==x){
                    matrix[i][j]=0;
                  }

                  
                  
               }
               matrix[i][y]=0;              
            }

        }
        
    }
};
