class PrefixTree {
    private: 
    PrefixTree* next [26];
    bool endOfWord;
public:

    PrefixTree() {
        for(int i=0; i < 26; i++) {
            this -> next[i] = nullptr;
        }
    }
    
    void insert(string word) {
        PrefixTree* temp = this;
        for(char c: word) {
            int idx = c - 'a';
            if(!temp->next[idx]) {
                temp->next[idx] = new PrefixTree();
            }
            temp = temp->next[idx];
        }
        temp -> endOfWord = true;
    }
    
    bool search(string word) {
        PrefixTree* temp = this;
        for(char c : word) {
            int idx = c - 'a';
            if(temp->next[idx] == nullptr) {
                return false;
            }
            temp = temp -> next[idx];
        }
        return temp -> endOfWord;
    }
    
    bool startsWith(string prefix) {
        PrefixTree* temp = this;
        for(char c : prefix) {
            int idx = c - 'a';
            if(temp->next[idx] == nullptr) {
                return false;
            }
            temp = temp -> next[idx];
        }
        return true;
    }
};
