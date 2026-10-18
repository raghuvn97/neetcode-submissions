from heapq import heapify, heappop, heappush
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        max_heap = []
        heapify(max_heap)
        for i in nums:
            heappush(max_heap, -1 * i)
        
        i = 0
        while i < k-1:
            heappop(max_heap)
            i += 1

        return -1 * heappop(max_heap)
