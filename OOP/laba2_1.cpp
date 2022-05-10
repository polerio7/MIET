#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int Factorial(int);

int main(){
    int a;
    cin>>a;
    cout<<Factorial(a)<<endl;
    return 0;
}

int Factorial(int a){
    int S;
    if(a>0) S=a*Factorial(a-1);
    else return 1;
    return S;
}