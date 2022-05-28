#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s,m;
    getline(cin,s);
    m=s;
    reverse(m.begin(),m.end());
    if(m==s) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}