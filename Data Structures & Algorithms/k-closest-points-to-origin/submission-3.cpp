class Solution {
public:

    long long distance (vector<int> point) {
            int x = point[0];
            int y = point[1];
            return (long long) (x * x + y * y);
        }
    
    priority_queue<pair<long long, vector<int>>> hq;

    vector<vector<int>> res;
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for(const auto point : points) {
            hq.push({distance(point), point});
            if (hq.size() > k) hq.pop();
        }

        for(int i = 0; i < k; i++) {
            res.push_back(hq.top().second);
            hq.pop();
        }

        return res;
    }
};
