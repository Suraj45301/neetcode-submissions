class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(matrix.empty()) return false;

        int i=0,j=n-1;
        while(n > 1 && i <= j){
            int mid=(i+j)/2;
            if(matrix[mid][0] == target){
                return true;
            }
            else if(matrix[mid][0] < target){
                if(matrix[mid][m-1] >= target){
                    i=mid; break;
                }
                i=mid+1;
            }
            else{
                j=mid-1; 
            }
        }

        if(i>=n) return false;
        int row=i;
        int l=0,r=m-1;
        while(l <= r){
            int mid=(l+r)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid] < target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
};
