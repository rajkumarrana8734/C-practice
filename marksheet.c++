#include<iostream.h>
#include<conio.h>
class std{
    private:
         int r,t,p,m[5];
         char name[10];
    public:
        void getdata();
        void putdata();

}s[10];
void std::getdata()
{
    cout<<"enter r";
    cin>>r;
    cout<<"name";
    cin>>name;
    t=0;
    for(int i=0;i<5;i++)
    {
        cout<<"mark"<<i+1;
        cin>>m[i];
        t=t+m[i];
    }
}
void std::putdata()
{
    cout<<"marksheet"<<endl;
    cout<<"roll no"<<endl;
    cout<<"name"<<name<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"marks"<<i+1<<" "<<m[i]<<endl;
    }
    cout<<"total"<<t<<endl;
    cout<<"per"<<p<<endl;
}
void main()
{
    clrscr();
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].putdata();
    }
    getch();
}