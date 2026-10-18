class Solution {
public:

    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> hq(gifts.begin(), gifts.end());

        for (int i = 0; i < k; i++) {
            int val = floor(sqrt(hq.top()));
            hq.pop();
            hq.push(val);
        }

        long long result = 0;
        while (hq.size() > 0) {
            result += hq.top();
            hq.pop();
        }

        return result;
    }
};