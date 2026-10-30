class Solution {
public:
    int product(vector<int> &arr) {
        long long k = 1000000007;
        long long product = 1;

        for(int i = 0; i < arr.size(); i++) {
            product = (product * arr[i]) % k;
        }

        return product;
    }
};