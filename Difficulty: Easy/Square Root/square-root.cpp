
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
       int i = 1;

while(i * i <= n){

       i++;

};

return i - 1; // Your code goes here
    }
};

