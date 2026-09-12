class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m= mat.size();
        int n= mat[0].size();

        int row= 0;
        int col= mat[0].size()-1;

        while(row<m && col>=0){
            if(mat[row][col]==target){
                return true;
            }

            else if(mat[row][col]<target){
                row= row+1;
            }

            else{
                // >target
                col= col-1;
            }
        }

        return false;
    }
};