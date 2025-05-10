MISSING IN ARRAY :

class Solution {
    public:
      int missingNumber(vector<int>& arr) {
      
              sort(arr.begin(),arr.end());
          int low=0;
          int high=arr.size()-1;
          while(low <= high){
              int mid = (low+high)/2;
              if(arr[mid]!=mid + 1){
                  high=mid-1;
              }
              else{
                  low=mid+1;
              }
              
          }
          return low +1;
      }   
  };