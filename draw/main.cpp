#include <iostream>
#include <graphics.h>
using namespace std;

class point
{
    int x;
    int y;
public:
    point()
    {
        x = y = 0;
    }
    point(int l)
    {
        x = y = l;
    }
    point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void setx(int _x)
    {
        x = _x;
    }
    int getx()
    {
        return x;
    }
    void sety(int _y)
    {
        y = _y;
    }
    int gety()
    {
        return y;
    }
};
class shape{

protected:
    int color;
public:
    shape()

{
    color=15;
}
    shape(int c)

{
    color=c;
}
void setcolorshape(int c)
{
    color=c;
}


int getcolorshape()
{
  return color;
}

virtual void Draw()=0;



};

class Line:public shape
{
    point start;
    point End;
public:
    Line()///:start(),End()
    {

    }
    Line(int w, int m, int n, int z ,int _c):start(w,m),End(n,z),shape(_c)///access is faster
    {

    }
    /**Line(int w, int m, int n, int z)
    {
        start.setx();
        start.sety();
        End.setx();
        End.sety();
    }*/
    Line(point p1, point p2 ,int _c)
    {
        start.setx(p1.getx());
        start.sety(p1.gety());
        End.setx(p2.getx());
        End.sety(p2.gety());
        color=_c;
    }
    void Draw()
    {
        setcolor(color);
        line(start.getx(),start.gety(),End.getx(),End.gety());
    }
};
class Circle:public shape
{
    point center;
    int  radius;
public:
    Circle()///:start(),End()
    {
      radius=10;
    }
    Circle(int s, int a, int b,int _c):center(s,a),shape(_c)///access is faster
    {
          radius=b;
    }

 Circle(point cen,int R,int _c)///access is faster
    {
         center.setx(cen.getx());
        center.sety(cen.gety());
        radius =R;
        color=_c;
    }
     void Draw()
    {
        setcolor(color);
        circle(center.getx(),center.gety(),radius);
    }
};
class rect:public shape
{
    point ul;
    point rl;
public:
    rect()///:start(),End()
    {

    }
    rect(int z, int x, int c, int v,int _c):ul(z,x),rl(c,v),shape(_c)///access is faster
    {

    }

    rect(point p1, point p2,int _c)
    {
      ul.setx(p1.getx());
        ul.sety(p1.gety());
        rl.setx(p2.getx());
        rl.sety(p2.gety());
        color=_c;
    }
    void Draw()
    {
        setcolor(color);
        rectangle(ul.getx(),ul.gety(),rl.getx(),rl.gety());
    }
};
class picture
{
    int shapes;
     shape**picshape;
    public :
    picture()
    {
    shapes=0;
     picshape=NULL;
    }
    picture(int shsize ,shape ** _p)
    {

    }
      void  setshape(int shsize ,shape ** _p)
    {
      shapes=shsize;
      picshape=_p;
    }


    void paint()
    {
        for(int i = 0 ; i < shapes ; i++)
        {
             picshape[i]->Draw();
        }

    }
};

int main()
{

    cout << "Hello" << endl;
 initwindow(500,600);

 Circle*cirptr=new Circle(200,140,60,9);
 rect *rectptr=new rect(260,500,140,560,14);
 Line *lintptr1=new Line (200,140,100,300,5);
  Line *lintptr2=new Line (140,140,100,300,2);
 Line*lintptr3=new Line (300,300,100,300,15);
  Line *lintptr4=new Line (200,300,200,500,4);
  shape *sh[6];
  sh[0]=cirptr;
  sh[1]=rectptr;
  sh[2]=lintptr1;
  sh[3]=lintptr2;
  sh[4]=lintptr3;
  sh[5]=lintptr4;
 picture p;
 p.setshape(6,sh);
 p.paint();
  /* picture mypic;

  Line L[2]={Line(10,20,50,150,14) ,Line(70,40,100,200,9)};
   mypic.setline(2,L);

   Circle c[2]={Circle (100,200,50,5),Circle(100,200,70,9)};
   mypic.setcircle(2,c);

   rect R[2]={rect(50,100,200,300,2),rect(60,140,130,240,15)};
   mypic.setrect(2,R);

   mypic.paint();*/

   getch();
   closegraph();
   delete [] sh;


    return 0;
}
