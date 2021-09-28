
/*#include<iostream>
#include<graphics.h>

using namespace std;

class point
{
   int x , y;
public :
   point()
{
     x = y = 0;
}
point (int p)
{
  x = y = p;
}
point (int p1 ,int p2)
{
  x = p1;
  y = p2;
}
void set_x(int _x)
{
   x = _x;
}
int get_x()
{
   return x;
}
void set_y(int _y)
{
   y = _y;
}
int get_y()
{
   return y;
}

};

class Line
{
   point start , End;

public :
       Line()
       {

       }
       Line(int a, int b , int c , int d) : start(a,b) , End(c,d)
       {

       }
       Line(point p1 , point p2)
       {
           start.set_x(p1.get_x());
           start.set_y(p1.get_y());
           End.set_x(p2.get_x());
           End.set_y(p2.get_y());
       }
       void Draw()
       {
           line(start.get_x(),start.get_y(),End.get_x(),End.get_y());
       }
};

class Circle
{
    point center;
    int radius ;
public :
    Circle()
    {
        radius = 10;
    }
    Circle(int a , int b ,int c) : center(a,b)
    {
    radius = c;
    }
    Circle(point p , int r)
    {
        center.set_x(p.get_x());
        center.set_y(p.get_y());
        radius = r;
    }

    void Draw()
    {
      circle(center.get_x() , center.get_y() , radius);
    }
};
class rect
{
   point ul , rl;

public :
       rect()
       {

       }
       rect(int a, int b , int c , int d) : ul(a,b) , rl(c,d)
       {

       }
       rect(point p1 , point p2)
       {
          ul.set_x(p1.get_x());
          ul.set_y(p1.get_y());
           rl.set_x(p2.get_x());
           rl.set_y(p2.get_y());
       }
       void Draw()
       {
             rectangle(ul.get_x(),ul.get_y(),rl.get_x(),rl.get_y());
       }
};


int main()
{
    cout<<"Hello World \n";

   initwindow(400,600);
   Line L(10,20,50,150);
   L.Draw();

   Circle c(100,70,50);
   c.Draw();
 rect r(50,100,200,300);
   r.Draw();

   getch();
   closegraph();

   return 0;
}*/


/*#include<iostream>
#include<graphics.h>

using namespace std;

class point
{
   int x , y;
public :
   point()
{
     x = y = 0;
}
point (int p)
{
  x = y = p;
}
point (int p1 ,int p2)
{
  x = p1;
  y = p2;
}
void set_x(int _x)
{
   x = _x;
}
int get_x()
{
   return x;
}
void set_y(int _y)
{
   y = _y;
}
int get_y()
{
   return y;
}

};

class Line
{
   point start , End;

public :
       Line()
       {

       }
       Line(int a, int b , int c , int d) : start(a,b) , End(c,d)
       {

       }
       Line(point p1 , point p2)
       {
           start.set_x(p1.get_x());
           start.set_y(p1.get_y());
           End.set_x(p2.get_x());
           End.set_y(p2.get_y());
       }
       void Draw()
       {
           line(start.get_x(),start.get_y(),End.get_x(),End.get_y());
       }
};

class Circle
{
    point center;
    int radius ;
public :
    Circle()
    {
        radius = 10;
    }
    Circle(int a , int b ,int c) : center(a,b)
    {
    radius = c;
    }
    Circle(point p , int r)
    {
        center.set_x(p.get_x());
        center.set_y(p.get_y());
        radius = r;
    }

    void Draw()
    {
       circle(center.get_x() , center.get_y() , radius);
    }
};

class rect
{
    point UL , LR;
    public :
    rect()
    {
    }
    rect(int a ,int b ,int c ,int d) :UL(a,b),LR(c,d)
    {
    }
    rect(point p1 , point p2)
    {
           UL.set_x(p1.get_x());
           UL.set_y(p1.get_y());
           LR.set_x(p2.get_x());
           LR.set_y(p2.get_y());
    }
    void Draw()
    {
       rectangle(UL.get_x() , UL.get_y() , LR.get_x() , LR.get_y());
    }


};

int main()
{
    cout<<"Hello World \n";

   initwindow(400,600);
   Line L(10,20,50,150);
   L.Draw();

   Circle c(100,70,50);
   c.Draw();

   rect R(150,100,90,200);
   R.Draw();

   getch();
   closegraph();

   return 0;
}*/
#include<iostream>
#include<graphics.h>

using namespace std;

class point
{
   int x , y;
public :
   point()
{
     x = y = 0;
}
point (int p)
{
  x = y = p;
}
point (int p1 ,int p2)
{
  x = p1;
  y = p2;
}
void set_x(int _x)
{
   x = _x;
}
int get_x()
{
   return x;
}
void set_y(int _y)
{
   y = _y;
}
int get_y()
{
   return y;
}

};

class Line
{
   point start , End;

public :
       Line()
       {

       }
       Line(int a, int b , int c , int d) : start(a,b) , End(c,d)
       {

       }
       Line(point p1 , point p2)
       {
           start.set_x(p1.get_x());
           start.set_y(p1.get_y());
           End.set_x(p2.get_x());
           End.set_y(p2.get_y());
       }
       void Draw()
       {
           setcolor(15);
           line(start.get_x(),start.get_y(),End.get_x(),End.get_y());
       }
};

class Circle
{
    point center;
    int radius ;
public :
    Circle()
    {
        radius = 10;
    }
    Circle(int a , int b ,int c) : center(a,b)
    {
    radius = c;
    }
    Circle(point p , int r)
    {
        center.set_x(p.get_x());
        center.set_y(p.get_y());
        radius = r;
    }

    void Draw()
    {
        setcolor(11);
       circle(center.get_x() , center.get_y() , radius);
    }
};

class rect
{
    point UL , LR;
    public :
    rect()
    {
    }
    rect(int a ,int b ,int c ,int d) :UL(a,b),LR(c,d)
    {
    }
    rect(point p1 , point p2)
    {
           UL.set_x(p1.get_x());
           UL.set_y(p1.get_y());
           LR.set_x(p2.get_x());
           LR.set_y(p2.get_y());
    }
    void Draw()
    {
        setcolor(9);
       rectangle(UL.get_x() , UL.get_y() , LR.get_x() , LR.get_y());
    }


};

class picture
{
    int circle_num , rectangle_num , line_num;

    Circle * circle_ptr;
    rect * rectangle_ptr;
    Line * line_ptr;

    public :
    picture()
    {
    circle_num = line_num = rectangle_num= 0;
     circle_ptr = rectangle_ptr=line_ptr=NULL;
    }
    picture(int a , int b , int c , Circle * cp ,rect * rp,Line * lp)
    {
       circle_num = a ;
       rectangle_num = b;
       line_num = c;

       circle_ptr = cp;
       rectangle_ptr = rp;
       line_ptr = lp;
    }
    void set_line(int a , Line * b)
    {
        line_num = a;
        line_ptr = b;
    }
    void set_circle(int a , Line * b)
    {
        circle_num = a;
        circle_ptr = b;
    }
    void set_rectangle(int a , Line * b)
    {
        rectangle_num = a;
        rectangle_ptr = b;
    }

    void paint()
    {
        for(int i = 0 ; i < line_num ; i++)
        {
             line_ptr[i].Draw();
        }
        for(int i = 0 ; i < circle_num ; i++)
        {
             circle_ptr[i].Draw();
        }
        for(int i = 0 ; i < rectangle_num ; i++)
        {
             rectangle_ptr[i].Draw();
        }

    }
};

int main()
{
    cout<<"Hello World \n";

   initwindow(400,600);
   picture mypic;

   Line L[2]={(10,20,50,150) ,(70,40,100,200)};
   mypic.set_line(2,L);

   Circle c[2]={(100,70,50),(140,110,190)};
   mypic.set_line(2,c);

   rect R[2]={(150,100,90,200),(190,140,130,240)};
   mypic.set_line(2,R);

   mypic.paint();

   getch();
   closegraph();

   return 0;
}
