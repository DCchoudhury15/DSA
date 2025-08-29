class Solution {
  public:
    void printNos(int n) {
        // Code here
        if(n>0){
            printNos(n-1);
            cout<<n<<" ";
            
        }
        return;
    }
};