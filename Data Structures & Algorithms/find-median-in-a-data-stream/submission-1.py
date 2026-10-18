class MedianFinder:

    def __init__(self):
        self.min_heap = []
        self.max_heap = []

    def addNum(self, num: int) -> None:
        #Always add number to the max_heap
        heapq.heappush(self.max_heap, -num)

        #ensure max_heap is always <=  min_heap
        if self.min_heap and self.max_heap and -self.max_heap[0] > self.min_heap[0]:
            val = -heapq.heappop(self.max_heap)
            heapq.heappush(self.min_heap, val)

        # ensure the difference in the size of the heaps is not more than 1
        if len(self.max_heap) > len(self.min_heap) + 1:
            val = -heapq.heappop(self.max_heap)
            heapq.heappush(self.min_heap, val)
        elif len(self.min_heap) > len(self.max_heap) + 1:
            val = heapq.heappop(self.min_heap)
            heapq.heappush(self.max_heap, -val)
            

    def findMedian(self) -> float:
        if len(self.max_heap) > len(self.min_heap):
            return float(-self.max_heap[0])
        
        if len(self.max_heap) < len(self.min_heap):
            return float(self.min_heap[0])

        return (-self.max_heap[0] + self.min_heap[0]) / 2
        