class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        int prefixsum=0,len=0;
        for(int i=0;i<arr.size();i++){
            prefixsum+=arr[i];
            if(m.count(prefixsum-k)){
                len=max(len,i-m[prefixsum-k]);
            }
            if(prefixsum==k){
                len=max(len, i+1);
            }
            if(!m.count(prefixsum)){
                m[prefixsum]=i;
            }
        }
        if(len==0)return 0;
        return len;
    }
};