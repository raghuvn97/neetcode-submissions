class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> hq(stones.begin(), stones.end());

        while(hq.size() > 1) {
            int x = hq.top();
            hq.pop();
            int y = hq.top();
            hq.pop();
            if (x == y) continue;
            else if (x < y) hq.push(y-x);
            else hq.push(x-y);
        }
        if (hq.size() == 0) return 0;
        else return hq.top();
    }
};
