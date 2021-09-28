#include <iostream>
#include "data.h"

using namespace std;
int main()
{
    data d1;
    d1.print();
     data d2(1,2,3000);
     d2.print();

    cout << d1.differen(d2)<< endl;
    return 0;
}
