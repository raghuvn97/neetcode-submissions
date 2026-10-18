class Trie {
    public:
    bool endOfWord;
    Trie* next[26];

    Trie() {
        endOfWord = false;
        for(int i=0; i < 26; i++) {
            next[i] = nullptr;
        }
    }
};
class WordDictionary {
public:
    Trie* root;

    WordDictionary() {
        root = new Trie();
    }
    
    void addWord(string word) {
        Trie* temp = root;
        for(char c: word) {
            int idx = c -'a';
            if(temp -> next[idx] == nullptr) {
                temp -> next[idx] = new Trie();
            }
            temp = temp -> next[idx];
        }
        temp -> endOfWord = true;
    }
    
    bool search(string word) {
        return dfs(word, 0, root);
    }

    bool dfs(string word, int j, Trie* node) {
        Trie* temp = node;
        for(int i = j; i < word.length(); i++) {
            if (word[i] == '.') {
                for(int k=0; k < 26; k++) {
                    if (temp->next[k] && dfs(word, i+1, temp -> next[k])) return true;
                }
                return false;
            } else {
                int idx = word[i] - 'a';
                if (temp -> next[idx] == nullptr) {
                    return false;
                }
                temp = temp -> next[idx];
            }
        }
        return temp -> endOfWord;
    }
};
