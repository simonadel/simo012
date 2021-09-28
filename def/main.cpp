#include <iostream>

using namespace std;
 void testfunction(int num1,int num2=6,int num3=8)
 {
      cout << num1<<" " <<num2 <<" " << num3 <<endl;
 }
int main()
{
    testfunction(5,9);
    return 0;
}
