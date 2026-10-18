import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1
        r = max(piles)
        
        while l < r:
            rate = (l + r) // 2

            hours = 0
            for p in piles:
                hours += math.ceil(p/rate)
            
            if hours > h:
                l = rate + 1
            else:
                r = rate
        
        return l