from heapq import heapify, heappop, heappush
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        heap = []
        heapify(heap)
        for i in stones:
            heappush(heap, -1 * i)
        
        while len(heap) > 1:
            s1 = -1 * heappop(heap)
            s2 = -1 * heappop(heap)

            if s1 > s2:
                heappush(heap, -1 * (s1-s2))
        
        if len(heap):
            return -1 * heappop(heap)
        else:
            return 0
        