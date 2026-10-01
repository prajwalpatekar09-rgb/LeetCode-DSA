class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=1;
        int high=piles[n-1];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int max= mid;
            long long sum=0;
            for(int i=0;i<n;i++)
            {
            sum +=ceil((double)piles[i]/max);
            }
            if(sum<=h)
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