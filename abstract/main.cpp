#include <iostream>
#define pi 3.14
using namespace std;
class Geoshape
{
private:

protected:
int dim1;
int dim2;
public:
    Geoshape()
    {
        dim1=dim2=0;
    }
    Geoshape(int l)
    {
        dim1=dim2=l;
    }
    Geoshape(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;

    }
    void setDim1(int _dim1)
    {
        dim1=_dim1;

    }
    int getDim1()
    {
        return dim1;

    }
    void setDim2(int _dim2)
    {
        dim2=_dim2;

    }
    int getDim2()
    {
        return dim2;
    }
  virtual  float calcArea()=0;
   /* {
        cout<<"Geoshape calArea function"<<endl;
    }*/


};
class Rectangle:public Geoshape
{
public:

    Rectangle(int a,int b):Geoshape(a,b)
    {

    }

    float calcArea()
    {
       // return dim1*dim2; Error private
   return dim1*dim2;
         //cout<<"rectangle calArea function"<<endl;


    }
};
class square:public Geoshape
{
public:

    square()
    {

    }
    square(int a):Geoshape(a)
    {

    }
    void setDim(int L)
    {
        setDim1(L);
        setDim2(L);
    }

    float calcArea()
    {
        return getDim1()*getDim2();
    }
};


class circle:protected Geoshape
{
public:

    circle()
    {

    }
    circle(int a):Geoshape(a)
    {

    }
    void setDim(int m)
    {
        setDim1(m);
        setDim2(m);
    }

    float calcArea()
    {
        return  pi *getDim1()*getDim2();
    }
};




int sumofar(Geoshape*Shapel,Geoshape*Shape2)
{
    return Shapel->calcArea()+Shape2->calcArea();
}


int main()
{

/*Geoshape*r1=new Rectangle(2,3);
 Geoshape*s1=new square(4);
cout<<sumofar(r1,s1)<<endl;*/

    Rectangle r(2,5);
    cout<<r.calcArea()<<endl;
     circle c(5);
    cout<<c.calcArea()<<endl;

    square s(6); //ignore
   // s.setDim1(2); Error
 //  s.setDim(2);
    cout<<s.calcArea()<<endl;

    return 0;
}
