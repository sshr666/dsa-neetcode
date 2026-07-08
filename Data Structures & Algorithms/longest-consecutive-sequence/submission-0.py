class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ans=0
        arr = set(nums)
        for num in nums:
            if num - 1 not in arr:
                length=1

                while num+length in arr:
                    length+=1
                if length>ans:
                    ans=length

        return ans
