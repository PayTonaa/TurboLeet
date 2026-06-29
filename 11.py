class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        if len(height) == 1:
            return 0

        max_water = 0
        water = 0
        left = 0
        right = len(height) - 1
        while left < right:
            water = (right - left) * min(height[left], height[right])
            max_water = max(max_water, water)
            if height[left] > height[right]:
                right -= 1
            else:
                left += 1
        return max_water


height = [1,1]
s = Solution()
print(s.maxArea(height))