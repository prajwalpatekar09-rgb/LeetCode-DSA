class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int n = numbers.size();

        while(low < n)
        {
            int left = low + 1;
            int right = n - 1;

            int req = target - numbers[low];

            while(left <= right)
            {
                int mid = (left + right) / 2;

                if(numbers[mid] == req)
                {
                    return {low + 1, mid + 1};
                }
                else if(numbers[mid] < req)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            low++;
        }

        return {};
    }
};