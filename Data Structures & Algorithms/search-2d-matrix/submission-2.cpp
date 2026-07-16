class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            else if(matrix[mid][0]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        if(i==0){
            return false;
        }
        int k=0;
        int l=matrix[0].size()-1;
        while(k<=l){
            int mid=k+(l-k)/2;
            if(matrix[i-1][mid]==target){
                return true;
            }
            else if(matrix[i-1][mid]<target){
                k=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        return false;
    }
};
