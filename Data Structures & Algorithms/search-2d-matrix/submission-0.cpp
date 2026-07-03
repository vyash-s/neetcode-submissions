class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        
        for(int i = 0; i < row; i++){
            int l = 0;
            int r = matrix[0].size()-1;
            while(l<=r){
                if(matrix[i][r]<target){
                    break;
                }
                int mid = l+ (r-l)/2;
                if(matrix[i][mid]< target){
                    l++;
                }
                else if(matrix[i][mid]>target){
                    r--;
                }
                else{
                    return true;
                }
            }
        }
        return false;
        
    }
};
