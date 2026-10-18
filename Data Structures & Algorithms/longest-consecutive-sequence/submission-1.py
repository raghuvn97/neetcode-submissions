class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        longest = 0
        for i in nums:
            if i-1 not in nums:
                seq = i + 1
                long_local = 1
                while(True):
                    if seq in nums:
                        long_local += 1
                        seq += 1
                    else:
                        longest = max(longest,long_local)
                        break
        return longest