#include <iostream>
#define pi 3.14
using namespace std;
class shepa{
    protected :
     int ar,per;
   public:
       void clcalarea();

};
class squer:public shepa{

private:
    int side;
public :
    squer()

{
    ar=per=side=0;
}
void setsq()
{
    int a;
        cout<<"enter a side"<<endl;
cin>>a;
side=a;
}


void  clcalarea()
{
    ar =side*side;
    cout<<"area resule ="<<ar <<endl;
}
/*void pert()
{
    per=4*side;
    cout<<"perimeter of squer  ="<< per <<endl;
}*/

};
class circle:public shepa{

private:
    int rul;
public :
    circle()

{
    ar=per=rul=0;
}
void setrul()
{
    int a;
        cout<<"enter a area cicrle"<<endl;
cin>>a;
rul=a;
}

void  clcalarea()
{
    ar =pi * rul * rul;
    cout<<"area resule ="<<ar <<endl;
}
};
class rect:public shepa{

private:
    int w,l;
public:
    rect(){
    ar=per=w=l=0;


    }
    void setre(){
        int a,b;

    cout<<"enter  width and lentgh"<<endl;
    cin>>a>>b;
    w=a;
    l=b;

    }
    void  clcalarea()
    {
        ar=l*w;
        cout<<"area result of square="<<ar<<endl;

    }
  /*  void pert()
    {
        per=2*(l*w);
        cout<<"perimeter of rectangle  ="<<per<<endl;

    }*/


};
int main()
{

squer s1;
s1.setsq();
s1. clcalarea();
circle c;
c.setrul();
c.clcalarea();

 rect r1;
r1.setre();
r1. clcalarea();


    cout << "Hello world!" << endl;
    return 0;
}
