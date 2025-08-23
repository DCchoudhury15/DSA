class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int i, j ;
        int n=arr.size();
        for(i=0;i<n-1;i++){
            for(j=i;j<=n-1;j++){
                if(arr[j]<arr[i]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                
            }
            
        }
    }
};