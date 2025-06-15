class Solution {
public:
    int maxIndex(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = 1;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int mid = (high + low) / 2;

            int maxRowIndex = maxIndex(mat, n, m, mid);
            int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
            int right = mid + 1 < n ? mat[maxRowIndex][mid + 1] : -1;
            if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
                return (maxRowIndex, mid);
            } else if (max[maxRowIndex][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};