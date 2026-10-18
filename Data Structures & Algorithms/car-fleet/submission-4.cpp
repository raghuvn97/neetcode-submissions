class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> values;

        for(int i = 0; i < n; i++) {
            values.push_back({position[i], speed[i]});
        }
        
        sort(values.begin(),values.end());

        stack<double> fleet;

        for(int i = n-1; i > -1; i--) {
            double time = (double) (target - values[i].first) / values[i].second;

            if(fleet.empty() || fleet.top() < time) {
                fleet.push(time);
            }
        }

        return fleet.size();
    }
};
