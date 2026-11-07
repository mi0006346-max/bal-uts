#include <Iostream.h>
#include <Conio.h>
#include <Math.h>

int main()
{

float x,y,z,a,b,c,d,e;

cout<<"Input nilai a:";
cin>>a;
cout<<"input nilai b:";
cin>>b;
cout<<"input nilai c:";
cin>>c;


x=((a*a*a)+b)/c;
cout<<"hasil nilai x adalah"<< x <<endl;

cout<<"masukan nilai d:";
cin>>d;


y=(sqrt(x*x))/d;
cout<<"hasil nilai y adalah"<< y <<endl;

cout<<"masukan nilai e:";
cin>>e;

z=((sqrt(x*x))+(y*y))/e;
cout<<"hasil nilai z adalah"<< z <<endl;

getch();
}
