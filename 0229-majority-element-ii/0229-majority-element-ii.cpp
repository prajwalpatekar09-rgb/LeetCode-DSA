class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> arr1;
        map <int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        } 
        for(auto it:mpp)
        {
            if(it.second>floor(n/3))
            {
                arr1.push_back(it.first);

            }
        }
        return arr1;       
    }
};