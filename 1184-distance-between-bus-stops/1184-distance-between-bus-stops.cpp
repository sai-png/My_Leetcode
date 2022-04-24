class Solution {
public:
   int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        auto i = start, j = start, cw_dist = 0, ccw_dist = 0;
        while (i != destination || j != destination) {
            if (i != destination) {
                cw_dist += distance[i];
                i = (i + 1) % distance.size();
            }
            if (j != destination) {
                j = (j - 1 + distance.size()) % distance.size();
                ccw_dist += distance[j];
            }
        }
        return min(cw_dist, ccw_dist);
    }
};