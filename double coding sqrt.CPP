#include <Iostream.h>
#include <Conio.h>
#include <Math.h>

int main()
{

double a,b,c,x,y;

cout <<"Input nilai a:";
cin>>a;
cout <<"input nilai b:";
cin>>b;
cout <<"input nilai c:";
cin>>c;

x=sqrt(a+b)/(c*c-a);

cout <<"hasil x:"<< x <<endl;

getch();
}
