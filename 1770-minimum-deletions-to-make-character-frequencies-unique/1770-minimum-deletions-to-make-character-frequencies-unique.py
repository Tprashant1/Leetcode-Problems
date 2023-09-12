class Solution:
    def minDeletions(self, s: str) -> int:
        d=Counter(s)
        c=0
        t=set()
        for obj,vals in d.items():
            while vals>0 and vals in t:
                vals -=1
                c+=1
            t.add(vals)
        return c



