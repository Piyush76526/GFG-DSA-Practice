
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max = INT_MIN;
        for(int i = 0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
            int secondmax = INT_MIN;
                for(int i = 0;i<n;i++){
                    if(max!=arr[i] && secondmax<arr[i]){
                        secondmax = arr[i];
                    
                        

                        

                        
                    }
                    
                }
                if(secondmax == INT_MIN)
                    return -1;

            
                return secondmax;
              
    }
};