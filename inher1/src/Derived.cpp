#include <iostream>
#include "Derived.h"

using namespace std;


Derived::Derived()
{
    w=0;

    cout<<"Default Constructor derived"<<endl;

}
Derived::Derived(int w)
{


   w=w;
     cout<<"One Parameter derived"<<endl;

}
 Derived:: Derived(int w,int x,int y):Base(x,y){
     w=w;
 }
  void  Derived::setW(int w){
      w=w;
  }
   int    Derived::  getW()
       {
           return w;
       }
int  Derived:: sum()
       {
           return(w+Base ::sum());
       }


Derived::~Derived()
{
    //dtor
}
