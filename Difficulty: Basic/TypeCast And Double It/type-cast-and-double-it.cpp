#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
      int n= stoi(num);
       n*=2;
       cout<<n<<endl;
    return 0;
}
