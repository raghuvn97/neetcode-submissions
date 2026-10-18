class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0 
        n = len(nums) - 1

        while i <= n:
            if nums[i] == val:
                nums[i] = nums[n]
                n -= 1
            else:
                i += 1
        
        return n + 1