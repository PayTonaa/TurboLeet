#// Given a string s, return the of s that contains all the distinct characters of s exactly once


class Solution(object):
    def smallestSubsequence(self, s):
        """
        :type s: str
        :rtype: str
        """
        chars = {}
        for i in range(len(s)):
            chars[s[i]] = i

        stack = []
        for i in range(len(s)):
            if s[i] in stack:
                continue
            while stack and s[i] < stack[-1] and chars[stack[-1]] > i:
                stack.pop()
            stack.append(s[i])

        return "".join(stack)



s = "cbacdcbc"
sol = Solution()
sol.smallestSubsequence(s)