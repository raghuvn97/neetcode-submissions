class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        res = [0 for i in range(len(temperatures))]

        for idx, i in enumerate(temperatures):
            if len(stack) != 0:
                while len(stack) and stack[-1][0] < i:
                    j = stack.pop()[1]
                    res[j] = idx - j
                stack.append((i, idx))
            stack.append((i, idx))

        return res    