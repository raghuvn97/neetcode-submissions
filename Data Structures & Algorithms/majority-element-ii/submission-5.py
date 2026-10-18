class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        can1 = 0
        can2 = 0
        count1 = 0
        count2 = 0

        for i in nums:
            if i == can1:
                count1 += 1
            elif i == can2:
                count2 += 1
            else:
                if count1 == 0:
                    can1 = i
                    count1 += 1
                elif count2 == 0:
                    can2 = i
                    count2 += 1
                else:
                    count1 -= 1
                    count2 -= 1
        res = []

        threshold = len(nums) // 3
        count1 = 0
        count2 = 0

        for i in nums:
            if i == can1:
                count1 += 1
            elif i == can2:
                count2 += 1

        if count1 > threshold:
            res.append(can1)
        
        if count2 > threshold:
            res.append(can2)
        
        return res