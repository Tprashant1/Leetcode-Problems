class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        l=[]
        res=[]
        c=0
        n=len(grid)
        m=len(grid[0])
        for i in range(n):
            for j in range(m):
                res.append(grid[j][i])
            l.append(res)
            res=[]
        for i in range(len(grid)):
            for j in range(len(l)):
                if grid[i]==l[j]:
                    c+=1
        return c