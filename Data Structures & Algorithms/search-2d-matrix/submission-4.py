class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        i = 0
        j = len(matrix) - 1

        # 1. Binary search to narrow down the row
        while i < j:
            mid = i + (j - i) // 2
            if matrix[mid][0] < target:
                i = mid + 1
            else:
                j = mid
        
        # If j points to a row starting with a value greater than target, 
        # the target must be in the previous row (if a previous row exists)
        row = j if matrix[j][0] <= target else j - 1
        if row < 0: 
            return False

        # 2. Standard binary search within the chosen row
        m = 0
        n = len(matrix[row]) - 1

        while m <= n:
            mid = m + (n - m) // 2
            if matrix[row][mid] < target:
                m = mid + 1
            elif matrix[row][mid] > target:
                n = mid - 1
            else:
                return True

        return False