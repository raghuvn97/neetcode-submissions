class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        leftprod = [0] * n 
        rightprod = [0] * n
        res = [0] * n

        leftprod[0] = rightprod[n-1] = 1

        for i in range(1, n):
            leftprod[i] = leftprod[i-1] * nums[i-1]
        
        for i in range(n - 2, -1 , -1):
            rightprod[i] = rightprod[i+1] * nums[i+1]

        for i in range(n):
            res[i] = leftprod[i] * rightprod[i]

        return res