#include<iostream.h>
#include<conio.h>

class circle
{
    public:
    int r;
    void area()
    {
        cout<<"area"<<3.14*r*r;

    }
};
void main()
{
    clrscr();
    circle c;
    cout<<"enter radius";
    cin>>c.r;
    c.area();
    getch();

}

//output enter radius 10
   area 314