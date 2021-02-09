#include <algorithm>
#include <vector>

class Solution {
 public:
  int climbStairs(int n) {
    if (n <= 2) {
      return;
    }

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (auto i = 3; i <= n; ++i) {
      dp[i] = dp[i - 2] + dp[i - 1];
    }

    return dp[n];
  }
};