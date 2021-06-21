class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        A = {}
        n = 1
        for x in nums:
            if x > 0:
                A[x] = 1
                
        n = 1
        while True:
            if not A.get(n):
                return n
            n += 1
        