class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
       int temp =n;
       int remainder=0;
       int out=0;
       while(temp!=0){
           remainder=temp%10;
           if(remainder!=0 &&n%remainder==0)
           out++;
           temp=temp/10;
       }
       return out;
    }
};