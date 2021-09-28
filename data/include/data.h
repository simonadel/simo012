#ifndef DATA_H
#define DATA_H


class data
{
    int D,m,y;
    public:
        data();
        data(int d,int m,int y);
        void  setd(int D);
        void  setm(int m);
        void  sety(int y);

        int getd();
        int getm();
        int gety();

        int differen(data val);
        void print();

      ~data();



    private:
};

#endif // DATA_H
