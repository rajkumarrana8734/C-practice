#include<iostream.h>
#include<conio.h>

class circle
{
    private:
    int r;
    void area()
    {
        cout<<"enter radius";
        cin>>r
        cout<<"area"<<3.14*r*r;

    }
};
void main()
{
    clrscr();
    circle c;
    c.area();
    getch();

}

//output enter radius 10
   area 314