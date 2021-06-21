class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        r, c = len(grid)-1, len(grid[0])-1
        if grid[r][c] >= 0:
            return 0
        res = 0
        while r >= 0 :
            if grid[r][c] < 0:
                res += 1
                c -= 1
            if grid[r][c] >= 0 or c == -1:
                r -= 1
                c = len(grid[0])-1
                
        return res