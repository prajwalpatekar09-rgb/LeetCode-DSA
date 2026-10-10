
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int suma = 0, sumb = 0;

        for(int i = 0; i < aliceSizes.size(); i++)
            suma += aliceSizes[i];

        for(int i = 0; i < bobSizes.size(); i++)
            sumb += bobSizes[i];

        for(int x : aliceSizes) {
            for(int y : bobSizes) {
                if(suma - x + y == sumb - y + x) {
                    ans.push_back(x);
                    ans.push_back(y);
                    return ans;
                }
            }
        }

        return ans;
    }
};
