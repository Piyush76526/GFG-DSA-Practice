class Solution {
  public:
    int findMin(vector<int>& arr) {
    int n = arr.size();
    int mini = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
    }
};