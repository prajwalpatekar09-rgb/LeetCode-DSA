
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int maxi = nums[n-1];
        int cnt = 1;

        for(int j = n-2; j >= 0; j--) {
            if(nums[j] != maxi) {
                maxi = nums[j];
                cnt++;
            }

            if(cnt == 3) {
                return maxi;
            }
        }

        return nums[n-1];
    }
};
