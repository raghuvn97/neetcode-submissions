class Solution {
public:
    priority_queue<int, vector<int>, greater<int>> hq;

    int findKthLargest(vector<int>& nums, int k) {

        for(int i : nums) {
            hq.push(i);

            if (hq.size() > k) hq.pop();
        }

        return hq.top();
    }
};
