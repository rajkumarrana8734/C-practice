#include<iostream.h>
#include<conio.h>

class time
{
    private:
        int h,m,s,ts;
    public:
        void get();
        void con();
        void put()
        {
            cout<<"hh:"<<h<<"mm:"<<m<<"<<ss:"<<s<<endl;
            cout<<"total second is"<<ts<<endl;
        }
}
void time::get()
{
    cout<<"enter h m s";
    cin>>h>>m>>s;
}
void time::con()
{
    ts=0;
    ts=h*3600+m*60+s;
}
void main()
{
    time t;
    clrscr();
    t.get();
    t.com();
    t.put();
    getch();
}