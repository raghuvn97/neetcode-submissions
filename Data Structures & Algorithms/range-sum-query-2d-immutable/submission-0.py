class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        self.rows = len(matrix)
        self.cols = len(matrix[0])

        self.prefix = [[0 for c in range(self.cols + 1)] for r in range(self.rows + 1)]

        for r in range(self.rows):
            currsum = 0
            for c in range(self.cols):
                currsum += matrix[r][c]
                above = self.prefix[r][c+1]
                self.prefix[r+1][c + 1] = currsum + above

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        #print(self.prefix)
        return self.prefix[row2+1][col2+1] - self.prefix[row1][col2+1] - self.prefix[row2+1][col1] + self.prefix[row1][col1]


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)