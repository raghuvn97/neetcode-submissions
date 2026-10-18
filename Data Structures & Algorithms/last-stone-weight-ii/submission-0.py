class Solution:
    def lastStoneWeightII(self, stones: List[int]) -> int:
        dp = {0}
        total = sum(stones)
        target = total // 2

        for stone in stones:
            new_weights = set()
            for weight in dp:
                if weight + stone <= target:
                    new_weights.add(weight + stone)
            dp.update(new_weights)

        max_pile_a = max(dp)
        pile_b = total - max_pile_a

        return pile_b - max_pile_a
