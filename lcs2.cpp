#include <iostream>
#include <vector>
#include <algorithm>

int longest_common_subsequence(const std::vector<int> &A, const std::vector<int> &B) {
    int n = A.size();
    int m = B.size();

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            std::cout << "A[" << i - 1 << "]=" << A[i - 1] << " B[" << j - 1 << "]=" << B[j - 1]
                      << "===========================================" << std::endl;
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                std::cout << "dp[" << i << "][" << j << "}=" << dp[i][j] << std::endl;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
                std::cout << "not found!"<<std::endl;
                std::cout << "dp[" << i - 1 << "][" << j << "}=" << dp[i - 1][j] << std::endl;
                std::cout << "dp[" << i << "][" << j - 1 << "}=" << dp[i][j - 1] << std::endl;
            }
            // Print the 2D vector
            for (const auto &row: dp) {
                for (const auto &element: row) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            }

        }
    }
    // Print the 2D vector
    for (const auto &row: dp) {
        for (const auto &element: row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return dp[n][m];
}
//A = {1, 3, 4, 1, 2, 3};
//B = {3, 1, 4, 2, 3};
//0 0 0 0 0 0
//0 0 1 1 1 1
//0 1 1 1 1 2
//0 1 1 2 2 2
//0 1 2 2 2 2
//0 1 2 2 3 3
//0 1 2 2 3 4


int main() {
    std::vector<int> A = {1, 3, 4, 1, 2, 3};
    std::vector<int> B = {3, 1, 4, 2, 3};

    int result = longest_common_subsequence(A, B);
    std::cout << "Dlugosc najdluzszego wspolnego podciagu: " << result << std::endl;

    return 0;
}
