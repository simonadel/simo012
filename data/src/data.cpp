#include "data.h"
#include <iostream>

using namespace std;

data::data()
{
    D=1;
    m=1;
    y=3000;
}
data:: data(int D,int m,int y){
    setd( D);
    setm( m);
    sety( y);
}
void data::setd(int D)
{
if(D>0 && D<30)
    this->D=D;
else
    D=1;

}
void data::setm(int m)
{
if(m>0 && m<13)
    this->m=m;
else
     m=1;

}
void data::sety(int y)
{
if(y>0 )
    this->y=y;
else
     y=3000;

}
int data::getd(){return D;}
int data::getm(){return m;}
int data::gety(){return y;}

int data::differen(data val)
{
    int diff=0;
    diff+=(this->y - val.y)*365;
        diff+=(this->m - val.m)*30;
    diff+=(this->y - val.D);
    return diff;

}
 void data::print(){

   cout << this->D << "/" <<this->m <<"/" << this->y <<"\n";
}

data::~data()
{
    //dtor
}
