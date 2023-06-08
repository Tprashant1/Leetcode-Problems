class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        c=0
        n=len(grid)
        m=len(grid[0])
        for i in range(n):
            for j in range(m):
                if grid[i][j] < 0 :
                    c+=1
                j+=1
            i+=1
        return c


