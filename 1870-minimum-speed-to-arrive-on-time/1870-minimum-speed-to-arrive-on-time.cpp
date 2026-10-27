
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();

        if (hour <= n - 1) return -1;

        int low = 1;
        int high = 10000000;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            double sum = 0;

            for (int i = 0; i < n - 1; i++) {
                sum += ceil((double)dist[i] / mid);
            }

            sum += (double)dist[n - 1] / mid;

            if (sum <= hour) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
