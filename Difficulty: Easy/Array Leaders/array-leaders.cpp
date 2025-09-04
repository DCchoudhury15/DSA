

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>ans;
        int maxim=arr[n-1];
        
        ans.push_back(maxim);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxim){
                maxim=arr[i];
                ans.push_back(maxim);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};