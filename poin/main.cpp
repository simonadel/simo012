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

class Line
{
    point start;
    point End;
public:
    Line()///:start(),End()
    {

    }
    Line(int w, int m, int n, int z):start(w,m),End(n,z)///access is faster
    {

    }
    /**Line(int w, int m, int n, int z)
    {
        start.setx();
        start.sety();
        End.setx();
        End.sety();
    }*/
    Line(point p1, point p2)
    {
        start.setx(p1.getx());
        start.sety(p1.gety());
        End.setx(p2.getx());
        End.sety(p2.gety());
    }
    void Draw()
    {
        setcolor(15);
        line(start.getx(),start.gety(),End.getx(),End.gety());
    }
};
class Circle
{
    point center;
    int  radius;
public:
    Circle()///:start(),End()
    {
      radius=10;
    }
    Circle(int s, int a, int b):center(s,a)///access is faster
    {
          radius=b;
    }

 Circle(point cen,int R)///access is faster
    {
         center.setx(cen.getx());
        center.sety(cen.gety());
        radius =R;
    }
     void Draw()
    {
        circle(center.getx(),center.gety(),radius);
    }
};
class rect
{
    point ul;
    point rl;
public:
    rect()///:start(),End()
    {

    }
    rect(int z, int x, int c, int v):ul(z,x),rl(c,v)///access is faster
    {

    }

    rect(point p1, point p2)
    {
      ul.setx(p1.getx());
        ul.sety(p1.gety());
        rl.setx(p2.getx());
        rl.sety(p2.gety());
    }
    void Draw()
    {
        rectangle(ul.getx(),ul.gety(),rl.getx(),rl.gety());
    }
};
class picture
{
    int circlenum , rectnum , linenum;

    Circle * circleptr;
    rect * rectptr;
    Line * lineptr;

    public :
    picture()
    {
    circlenum = 0;
    linenum = 0;
    rectnum= 0;

     circleptr =NULL;
     rectptr=NULL;
     lineptr=NULL;
    }
    picture(int a , int b , int c , Circle * cp ,rect * rp,Line * lp)
    {
       circlenum = a ;
       rectnum = b;
       linenum = c;

       circleptr = cp;
       rectptr = rp;
       lineptr = lp;
    }
      void setline(int a , Line * b)
    {
        linenum = a;
        lineptr = b;
    }
       void setcircle(int a ,Circle * b)
    {
        circlenum= a;
        circleptr = b;
    }
       void setrect(int a , rect * b)
    {
        rectnum = a;
        rectptr = b;
    }

    void paint()
    {
        for(int i = 0 ; i < linenum ; i++)
        {
             lineptr[i].Draw();
        }
        for(int i = 0 ; i < circlenum ; i++)
        {
             circleptr[i].Draw();
        }
        for(int i = 0 ; i < rectnum ; i++)
        {
             rectptr[i].Draw();
        }

    }
};

int main()
{

    cout << "Hello" << endl;
 initwindow(500,400);
   picture mypic;

   Line L[2]={Line(10,20,50,150) ,Line(70,40,100,200)};
   mypic.setline(2,L);

   Circle c[2]={Circle (100,200,50),Circle(100,200,70)};
   mypic.setcircle(2,c);

   rect R[2]={rect(50,100,200,300),rect(60,140,130,240)};
   mypic.setrect(2,R);

   mypic.paint();

   getch();
   closegraph();

   /* initwindow(400,300);
    Line L(10,20,50,100);
    L.Draw();
 Circle c(100,200,50);
    c.Draw();
rect r(50,100,200,300);
    r.Draw();

    getch();
    closegraph();*/
    return 0;
}
