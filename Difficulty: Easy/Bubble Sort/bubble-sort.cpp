class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        int flag;
        for(int i=0;i<n-1;i++){
            flag=0;
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    flag=-1;
                }
            }
            if(flag==0)break;
        }
    }
};