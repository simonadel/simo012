#include <iostream>
#include "Derived.h"
#include "Base.h"
using namespace std;

int main()
{
    Derived d (0,3,6) ;
      cout << d.sum() << endl;
    return 0;
}
