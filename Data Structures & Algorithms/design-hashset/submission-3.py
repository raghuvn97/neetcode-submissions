class MyHashSet:

    def __init__(self):
        self.num_buckets = 769
        self.bucket = [[] for i in range(769)]
    
    def __hash(self, num):
        return num % self.num_buckets

    def add(self, key: int) -> None:
        if key not in self.bucket[self.__hash(key)]:
            self.bucket[self.__hash(key)].append(key)

    def remove(self, key: int) -> None:
        if key in self.bucket[self.__hash(key)]:
            self.bucket[self.__hash(key)].remove(key)

    def contains(self, key: int) -> bool:
        return key in self.bucket[self.__hash(key)]


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)