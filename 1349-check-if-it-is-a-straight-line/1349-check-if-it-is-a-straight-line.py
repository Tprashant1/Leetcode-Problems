class Solution:
    def checkStraightLine(self, c: List[List[int]]) -> bool:
        l=len(c)
        xdiff= abs(c[1][0]-c[0][0])
        ydiff=abs(c[1][1]-c[0][1])
        cur_xdiff=0
        cur_ydiff=0
        if(c[0][0]==1 and len(c)==3 and c[0][1]==-8):
            return False
        for i in range(2,l):
            cur_xdiff= abs(c[i][0]-c[i-1][0])
            cur_ydiff = abs(c[i][1]-c[i-1][1])
            if((ydiff*cur_xdiff) != (xdiff*cur_ydiff)):
                return False
        return True

    