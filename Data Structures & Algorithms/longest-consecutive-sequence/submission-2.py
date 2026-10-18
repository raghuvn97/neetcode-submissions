class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset = set(nums)
        longest = 0
        for i in numset:
            if i-1 not in numset:
                seq = i + 1
                long_local = 1
                while(True):
                    if seq in numset:
                        long_local += 1
                        seq += 1
                    else:
                        longest = max(longest,long_local)
                        break
        return longest