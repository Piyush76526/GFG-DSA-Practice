class Solution {
public:
    int missingNum(vector<int>& nums) {
        long long n = nums.size() + 1;

        long long exp = n * (n + 1) / 2;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        return exp - sum;
    }
};