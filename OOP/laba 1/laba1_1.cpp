#include <iostream>
#include <math.h>

using namespace std;

int main(){
int a,b,c;
float D,x1,x2;

cout<<""<<endl;
cin>>a>>b>>c;

D=pow(b,2)-4*a*c;
if(a!=0){
    x1=float(-b+sqrt(D))/float(2*a);
    x2=float(-b-sqrt(D))/float(2*a);
}
else{
    x1=-float(c)/float(b);
    x2=float(-c)/float(b);
}
if(x1==x2) cout<<x1<<endl;
else cout<<x1<<' '<<x2<<endl;
return 0;
}  