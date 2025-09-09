class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int po=0;
        int ne=1;
        vector<int>res(nums.size(), 0);
        for(int n:nums){
            if(n>0){
                res[po]=n;
                po+=2;
            }else{
                res[ne]=n;
                ne+=2;
            }
        }
        return res;
    }
};