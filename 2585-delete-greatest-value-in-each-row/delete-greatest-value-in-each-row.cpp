class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid)
            sort(row.begin(), row.end(), greater<int>());
        int result = 0, n = grid[0].size();
        for (int col = 0; col < n; ++col) {
            int maxval = 0;
            for (auto& row : grid)
                maxval = max(maxval, row[col]);
            result += maxval;
        }
        return result;
    }
};