class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int l = 0;
       int r = matrix.size()-1;

       int mid = 0;
       while(l <= r) {
        mid = l + (r-l)/2;
        if (matrix[mid][0] > target) {
            r = mid -1;
        } else if(matrix[mid][0] < target) {
            l = mid +1;
        } else {
            return true;
        }
       }

       int row = r;
       if (row < 0) return false;

       l = 0;
       r = matrix[row].size() - 1;

       while(l <= r) {
        int res = l + (r-l)/2;
        if(matrix[row][res] > target) {
            r = res-1;
        } else if(matrix[row][res] < target) {
            l = res+1;
        } else {
            return true;
        }
       } 

       return false;
    }
};
