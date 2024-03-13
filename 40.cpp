#include <iostream>
#include <vector>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    
    // Create a 2D vector to store the number of unique paths
    vector<vector<long long> > dp(m, vector<long long>(n, 0));
    
    // Base case: if the starting cell is an obstacle, return 0
    if (obstacleGrid[0][0] == 1) return 0;
    
    // Initialize the number of unique paths for the first row and column
    dp[0][0] = 1;
    for (int i = 1; i < m; ++i) {
        if (obstacleGrid[i][0] == 0)
            dp[i][0] = dp[i - 1][0];
    }
    for (int j = 1; j < n; ++j) {
        if (obstacleGrid[0][j] == 0)
            dp[0][j] = dp[0][j - 1];
    }
    
    // Calculate the number of unique paths for each cell in the grid
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (obstacleGrid[i][j] == 0)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    
    // Return the number of unique paths for the bottom-right corner
    return dp[m - 1][n - 1];
}

int main() {
    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    int paths = uniquePathsWithObstacles(obstacleGrid);

    cout << "Number of unique paths in the grid: " << paths << endl;

    return 0;
}

