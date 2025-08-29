class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N>0){
            printGfg(N-1);
            cout<<"GFG"<<" ";
        }
        return;
    }
};
