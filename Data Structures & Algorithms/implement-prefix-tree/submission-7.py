class PrefixTree:

    class Node:
        def __init__(self):
            self.children = [None] * 26
            self.endOfWord = False

    def __init__(self):
        self.node = self.Node()
        
    def insert(self, word: str) -> None:
        temp = self.node
        for i in range(len(word)):
            idx = ord(word[i]) - ord('a')
            if not temp.children[idx]:
                temp.children[idx] = self.Node()
            temp = temp.children[idx]
        temp.endOfWord = True

    def search(self, word: str) -> bool:
        temp = self.node
        for i in range(len(word)):
            idx = ord(word[i]) - ord('a')
            if not temp.children[idx]:
                return False
            temp = temp.children[idx]
        return temp.endOfWord

    def startsWith(self, prefix: str) -> bool:
        temp = self.node
        for i in range(len(prefix)):
            idx = ord(prefix[i]) - ord('a')
            if not temp.children[idx]:
                return False
            temp = temp.children[idx]
        return True
        
        