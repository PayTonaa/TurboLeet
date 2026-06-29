class Solution(object):
    def canJump(self, nums):
        farest = 0
        for index in range(len(nums)):
            if index > farest:
                return False
            farest = max(farest, index + nums[index])
            if farest >= len(nums) - 1:
                return True
        return False

s = Solution()
nums = [0, 1]
print(s.canJump(nums))
