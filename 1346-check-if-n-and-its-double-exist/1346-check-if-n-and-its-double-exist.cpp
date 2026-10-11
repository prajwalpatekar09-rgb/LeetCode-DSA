class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n =arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int dou=2*arr[i];
            int low=0;
            int high=n-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(arr[mid]==dou)
                {
                    if(mid!=i)
                    {
                        return true;
                    }
                    low=mid+1;
                }
                else if(arr[mid]<dou)
                {
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};