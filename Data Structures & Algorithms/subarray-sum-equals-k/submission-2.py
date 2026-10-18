class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        prefix = {}
        prefix[0] = 1

        currsum = 0
        res = 0

        for i in nums:
            currsum += i

            if currsum - k in prefix:
                res += prefix[currsum - k]
            
            prefix[currsum] = prefix.get(currsum, 0) + 1
        return res