#include <iostream>
#include <math.h>

using namespace std;

void main(){
int a,b,c;
float D,x1,x2;

cout<<""<<endl;
cin>>a>>b>>c;

D=pow(b,2)-4*a*c;
x1=(-b+pow(D,1/2))/(2*a);
x2=(-b-pow(D,1/2))/(2*a);

cout<<x1<<' '<<x2<<endl;

}  