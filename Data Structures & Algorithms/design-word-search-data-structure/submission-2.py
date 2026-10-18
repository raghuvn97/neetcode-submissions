class WordDictionary:

    class Node:

        def __init__(self):
            self.children = [None] * 26
            self.endOfWord = False

    def __init__(self):
        self.node = self.Node()
        

    def addWord(self, word: str) -> None:
        temp = self.node
        for i in range(len(word)):
            idx = ord(word[i]) - ord('a')
            if not temp.children[idx]:
                temp.children[idx] = self.Node()
            temp = temp.children[idx]
        temp.endOfWord = True

    def search(self, word: str) -> bool:

        def dfs(j, root):
            cur = root

            for i in range(j, len(word)):
                c = word[i]
                if c == ".":
                    for child in cur.children:
                        if child:
                            if dfs(i + 1, child):
                                return True
                    return False
                else:
                    idx = ord(c) - ord('a')
                    if not cur.children[idx]:
                        return False
                    cur = cur.children[idx]
            return cur.endOfWord
        return dfs(0, self.node)
