class Solution(object):
    def zigZagArrays(self, n, l, r):
        MOD = 10**9 + 7
        m = r - l

        if n == 1:
            return m + 1

        dp = [1] * (m + 1)

        for i in range(1, n):
            new_dp = [0] * (m + 1)
            if i % 2 == 1:
                prefix = 0
                for j in range(m + 1):
                    new_dp[j] = prefix
                    prefix = (prefix + dp[j]) % MOD
            else:
                suffix = 0
                for j in range(m, -1, -1):
                    new_dp[j] = suffix
                    suffix = (suffix + dp[j]) % MOD
            dp = new_dp

        return (sum(dp) * 2) % MOD