class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin;
        vector <double> ans;
        double far;
        kelvin=celsius+273.15;
        far=celsius*1.80+32;
        ans.push_back(kelvin);
        ans.push_back(far);
        return ans;


        
    }
};