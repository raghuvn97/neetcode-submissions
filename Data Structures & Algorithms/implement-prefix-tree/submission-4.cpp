class PrefixTree {
public:
    PrefixTree* children [26];
    bool endOfWord;

    PrefixTree() {
        for(int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        endOfWord = false;
    }
    
    void insert(string word) {
        PrefixTree* temp = this;
        for (char c : word) {
            int idx = c - 'a';
            if(!temp -> children[idx]) temp -> children[idx] = new PrefixTree();
            temp = temp -> children[idx];
        }
        temp -> endOfWord = true;
        return;
    }
    
    bool search(string word) {
        PrefixTree* temp = this;
        for(char c : word) {
            int idx = c - 'a';
            if (!temp -> children[idx]) return false;
            temp = temp -> children[idx];
        }
        return temp -> endOfWord;
    }
    
    bool startsWith(string prefix) {
        PrefixTree* temp = this;
        for(char c : prefix) {
            int idx = c - 'a';
            if (!temp -> children[idx]) return false;
            temp = temp -> children[idx];
        }
        return true;
    }
};
