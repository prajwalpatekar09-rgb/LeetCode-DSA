class Solution {
public:
    int countCommas(int n) {
        int cnt;
        vector <int> arr;
        if(n<1000)
        {
            return 0;
        }
        while(n>=1000)
        {
            n=n-1;
            cnt++;
        }
        return cnt;
         

        
    }
};