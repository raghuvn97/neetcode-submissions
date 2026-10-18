class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:

        def sort(left, right):
            if left == right:
                return [nums[left]]
            
            mid = left + (right - left) // 2
            l1 = sort(left, mid)
            l2 = sort(mid + 1, right)

            return merge(l1, l2)


        def merge(l1, l2):
            i = 0
            j = 0
            res = []
            while i < len(l1) and j < len(l2):
                if l1[i] < l2[j]:
                    res.append(l1[i])
                    i += 1
                else:
                    res.append(l2[j])
                    j += 1
            
            while i < len(l1):
                res.append(l1[i])
                i += 1
            
            while j < len(l2):
                res.append(l2[j])
                j += 1

            return res

        return sort(0, len(nums) - 1)