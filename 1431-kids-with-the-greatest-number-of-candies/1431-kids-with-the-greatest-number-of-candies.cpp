class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>=maxi)
            {
                maxi=candies[i];
            }
        }

        vector <bool> results;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= maxi)
            {
                results.push_back(true);
            }
            else{
                results.push_back(false);
            }

        }
        return results;
        
    }
};