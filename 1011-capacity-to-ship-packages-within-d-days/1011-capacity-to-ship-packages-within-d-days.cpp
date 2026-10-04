class Solution {
public:

    int reqday(vector<int>& weight, int cap)
    {
        int day = 1;
        int load = 0;

        for(int i = 0; i < weight.size(); i++)
        {
            if(load + weight[i] > cap)
            {
                day++;
                load = weight[i];
            }
            else
            {
                load += weight[i];
            }
        }

        return day;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = weights[0];
        int high = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            low = max(low, weights[i]);
            high += weights[i];
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            int noofday = reqday(weights, mid);

            if(noofday <= days)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};