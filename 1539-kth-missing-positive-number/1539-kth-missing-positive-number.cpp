class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> arr2;
        vector<int> ans;

        int num = 1;
        int n = arr.size();

        while(num <= arr[n-1]) {
            arr2.push_back(num);
            num++;
        }

        for(int i = 0; i < arr2.size(); i++) {

            int cnt = 0;

            for(int j = 0; j < n; j++) {
                if(arr2[i] == arr[j]) {
                    cnt++;
                }
            }

            if(cnt == 0) {
                ans.push_back(arr2[i]);
            }
        }

        // num = arr[n-1] + 1;

        while(ans.size() < k) {
            ans.push_back(num);
            num++;
        }

        return ans[k-1];
    }
};