/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    Node* dfs(unordered_map<Node*, Node*> &clone, Node* node) {
        if (clone.find(node) != clone.end()) return clone[node];

        Node* copy = new Node(node -> val);
        clone[node] = copy;
        
        for(Node* n : node -> neighbors) {
            copy -> neighbors.push_back(dfs(clone, n));
        }
        return copy;
    }
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> map;
        if (!node) return node;
        return dfs(map, node);
    }
};
