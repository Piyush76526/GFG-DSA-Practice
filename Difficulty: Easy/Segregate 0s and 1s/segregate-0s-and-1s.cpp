class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int ones = 0;
        int zeros = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0) zeros++;
            else ones++;
        }
            for(int i=0;i<zeros;i++){
                arr[i]=0;
            }
            for(int i=zeros;i<n;i++){
                arr[i]=1;
            }
    }
};