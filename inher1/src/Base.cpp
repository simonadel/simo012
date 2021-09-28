#include <iostream>
#include "Base.h"

using namespace std;
Base::Base()
{
     x=y=0;
    cout<<"Default Constructor base"<<endl;
}
Base::Base(int X,int Y)
{
    x=X;
    y=Y;

    cout<<"tow Parameter base"<<endl;
}
void Base::setX(int X)
{
    x=X;
}
int Base::getX()
{
    return x;

}
int Base::getY()
{
    return y;
}

Base::sum(){

return x+y;
}
Base::~Base()
{
    //dtor
}
