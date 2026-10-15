class Solution {
public:
    int maxele(vector<vector<int>>& mat, int n, int col) {
    int maxi = 0;

    for(int i = 1; i < n; i++) {
        if(mat[i][col] > mat[maxi][col]) {
            maxi = i;
        }
    }

    return maxi;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low+(high -low)/2;
             int maxi = maxele(mat ,n, mid);
            int left = (mid == 0) ? -1 : mat[maxi][mid - 1];
            int right = (mid == m - 1) ? -1 : mat[maxi][mid + 1];

            if(mat[maxi][mid]>left && mat[maxi][mid]>right) return {maxi,mid};
            else if(right > mat[maxi][mid]) low= mid+1;
            else{ high = mid-1;}
        }
        return {};
    }
};