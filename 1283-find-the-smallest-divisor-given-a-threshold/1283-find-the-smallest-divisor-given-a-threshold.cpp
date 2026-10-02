class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=1;
        int high=nums[n-1];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int max= mid;
            long long sum=0;
            for(int i=0;i<n;i++)
            {
            sum +=ceil((double)nums[i]/max);
            }
            if(sum<=threshold)
            {
                high=mid-1;
            
            }
            else{
            low=mid+1;
            }   
        }
        return low;
        
        
    }
};