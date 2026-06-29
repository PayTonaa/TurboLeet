class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        rows = [0] * 9
        cols = [0] * 9
        boxes = [0] * 9

        for r in range(9):
            row = board[r]
            rb = r // 3
            for c in range(9):
                val = row[c]
                if val == ".":
                    continue
                bit = 1 << (ord(val) - ord("1"))
                b = rb * 3 + c // 3
                if (rows[r] | cols[c] | boxes[b]) & bit:
                    return False
                rows[r] |= bit
                cols[c] |= bit
                boxes[b] |= bit
        return True
