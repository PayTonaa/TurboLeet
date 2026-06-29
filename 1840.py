
class Solution:
    def maxBuilding(self, n: int, restrictions) -> int:
        restrictions.append([1, 0])
        restrictions.sort(key=lambda x: x[0])

        for i in range(1, len(restrictions)):
            dist = restrictions[i][0] - restrictions[i-1][0]
            restrictions[i][1] = min(restrictions[i][1], restrictions[i-1][1] + dist)

        for i in range(len(restrictions) - 2, -1, -1):
            dist = restrictions[i+1][0] - restrictions[i][0]
            restrictions[i][1] = min(restrictions[i][1], restrictions[i+1][1] + dist)

        res = 0
        for i in range(1, len(restrictions)):
            dist = restrictions[i][0] - restrictions[i-1][0]
            h1, h2 = restrictions[i-1][1], restrictions[i][1]
            res = max(res, (dist + h1 + h2) // 2)

        last_id, last_h = restrictions[-1]
        res = max(res, last_h + (n - last_id))

        return res

n = 5
restrictions = [[2,1],[4,1]]
s = Solution()
s.maxBuilding(n, restrictions)