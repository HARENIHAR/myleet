class Solution {
    public int countNegatives(int[][] grid) {
        int count=0;
        for (int row[] : grid) {
            for (int nums : row) {
                if (nums < 0) {
                    count++;
                }
            }
        }
        return count;
    }
}