class TrieNode:
    def __init__(self):
        self.children = [None] * 26
        self.endOfWord = False

class PrefixTree:

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        node = self.root
        for s in word:
            idx = ord(s) - ord('a')
            if node.children[idx] == None:
                node.children[idx] = TrieNode()
            node = node.children[idx]
        node.endOfWord = True

    def search(self, word: str) -> bool:
        node = self.root
        for s in word:
            idx = ord(s) - ord('a')
            if node.children[idx] == None:
                return False
            node = node.children[idx]
        return node.endOfWord
        

    def startsWith(self, prefix: str) -> bool:
        node = self.root
        for s in prefix:
            idx = ord(s) - ord('a')
            if node.children[idx] == None:
                return False
            node = node.children[idx]
        return True
        