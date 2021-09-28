#ifndef DERIVED_H
#include "Base.h"


class Derived:public Base
{
     private:
         int w;
    public:
        Derived();
        Derived(int w);
        Derived(int w,int x,int y);
        void setW(int w);
        int getW();
        int sum();

    ~Derived();


};

#endif // DERIVED_H
