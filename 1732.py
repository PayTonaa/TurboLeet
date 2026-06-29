
class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        atitude = 0
        max_atitude = 0
        for g in gain:
            atitude += g
            max_atitude = max(atitude, max_atitude)
        return max_atitude

gain = [-5,1,5,0,-7]
s = Solution()
print(s.largestAltitude(gain))