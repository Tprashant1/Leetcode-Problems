class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        l=[]
        ans=0
        s=0
        r=[]
        if(len(nums)==1):
            return False
        for i in nums:
            ans += i
            l.append(ans)
        for i in l:
            s=i%k
            r.append(s)
        print(r)
        d={}
        d[0]=-1
        j=0
        for i in r:
            j+=1
            if i not in d:
                d[i]=j
            else:
                if(j-d[i]>1):
                    if(j==1 and i==0):
                        continue
                    else:
                        return True
        return False





       