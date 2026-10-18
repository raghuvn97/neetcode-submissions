from heapq import heapify, heappop, heappush
from math import sqrt
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        min_heap = []

        for x, y in points:
            distance = sqrt(x**2+y**2)
            min_heap.append((distance,x ,y))
        
        heapify(min_heap)
        
        res = []
        i = 0
        while i < k:
            res.append(heappop(min_heap)[1:])
            i += 1
        return res
