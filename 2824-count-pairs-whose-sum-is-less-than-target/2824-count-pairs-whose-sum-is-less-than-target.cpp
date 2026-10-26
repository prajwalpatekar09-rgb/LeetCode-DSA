class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int low=0;
        int high=n-1;
        int ans=0;
        while(low<high)
        {
            int mid=(low+high)/2;
            int res=nums[high]+nums[low];
            if(res<target)
            {
                ans+=high-low;
                low++;
            }
            else{
                high--;
            }

            

        }
        return ans;
        
    }
};