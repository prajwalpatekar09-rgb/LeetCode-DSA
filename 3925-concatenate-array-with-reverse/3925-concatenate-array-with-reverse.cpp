class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        int low=0;
        int high=n-1;
        int mid=(high+low)/2;
        while(low<=mid && high>=mid)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
        for(int i=0 ;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
        
    }
};