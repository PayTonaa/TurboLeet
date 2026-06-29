# from math import comb

# class Solution(object):
#     def uniquePaths(self, m, n):
#         return comb(m + n - 2, m - 1)

class Solution(object):
    def uniquePaths(self, m, n):
        costs = [[1] * n for _ in range(m)]
        for row in range(1, m):
            for column in range(1, n):
                costs[row][column] = costs[row - 1][column] + costs[row][column - 1]

        return costs[m - 1][n - 1]

