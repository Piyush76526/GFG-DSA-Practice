class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maxi = arr[0];

        for(int i = 0; i < n; i++) {
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        int smaxi = -1;

        for(int i = 0; i < n; i++) {
            if(arr[i] < maxi && arr[i] > smaxi) {
                smaxi = arr[i];
            }
        }

        return smaxi;
    }
};