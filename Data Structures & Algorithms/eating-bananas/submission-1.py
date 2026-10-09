class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l,r=1,max(piles)
        ans=r

        while l<=r:
            k=(l+r)//2

            time=0
            for x in piles:
                time+= x//k + (x%k>0)
            if time<=h:
                ans=k
                r=k-1
            else:
                l=k+1
        return ans

