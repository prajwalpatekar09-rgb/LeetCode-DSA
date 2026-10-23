class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i =0;i<nums.size();i++)
        {
            int cnt=0;
            int num=nums[i];
            while(num!=0)
            {
                int n=num%10;
                cnt++;
                num=num/10;
            }
            if(cnt%2==0)
            {
                even++;
            }
        }
        return even;
        
    }
};