class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
        int min = INT_MAX;
        for(int i = 0;i<n;i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        int secondmin = INT_MAX;
        for(int i = 0;i<n;i++){
            if(arr[i]!=min && secondmin>arr[i]){
                secondmin = arr[i];
            }
        }
            if(secondmin==INT_MAX) return {-1};
            return{min,secondmin};
        // code here
        
    }
};