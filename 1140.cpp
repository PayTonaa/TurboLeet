class Solution:
    def stoneGameII(self, piles: list[int]) -> int:
        n = len(piles)
        dp = [[0] * (n + 1) for _ in range(n)]
        s = [0] * n
        s[-1] = piles[-1]

        for i in range(n - 2, -1, -1):
            s[i] = s[i + 1] + piles[i]

        for i in range(n - 1, -1, -1):
            for m in range(n, 0, -1):
                if i + 2 * m >= n:
                    dp[i][m] = s[i]
                else:
                    for x in range(1, 2 * m + 1):
                        next_m = min(n, max(m, x))
                        dp[i][m] = max(dp[i][m], s[i] - dp[i + x][next_m])

        return dp[0][1]