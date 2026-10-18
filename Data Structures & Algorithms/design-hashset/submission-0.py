class MyHashSet:

    def __init__(self):
        self.num_buckets = 769
        self.bucket = [[] for i in range(769)]
    
    def __hash(self, num):
        return num % self.num_buckets

    def add(self, key: int) -> None:
        idx = self.__hash(key)
        if key not in self.bucket[idx]:
            self.bucket[idx].append(key)

    def remove(self, key: int) -> None:
        idx = self.__hash(key)
        if key in self.bucket[idx]:
            self.bucket[idx].remove(key)

    def contains(self, key: int) -> bool:
        idx = self.__hash(key)
        return key in self.bucket[idx]


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)