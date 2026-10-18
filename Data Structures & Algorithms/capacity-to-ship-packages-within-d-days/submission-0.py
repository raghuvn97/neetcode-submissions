class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        mincap = max(weights)
        maxcap = sum(weights)

        while mincap < maxcap:
            m = (mincap + maxcap) // 2

            d = 1
            cap = 0
            for w in weights:
                if cap + w > m:
                    d += 1
                    cap = 0
                cap += w

            if d > days:
                mincap = m + 1
            else:
                maxcap = m

        return mincap 