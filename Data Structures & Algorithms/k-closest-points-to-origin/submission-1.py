from heapq import heapify, heappop, heappush
from math import sqrt
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        min_heap = []
        heapify(min_heap)

        for x, y in points:
            distance = sqrt(x**2+y**2)
            heappush(min_heap, (distance, x, y))
        res = []
        i = 0
        while i < k:
            res.append(heappop(min_heap)[1:])
            i += 1
        return res
