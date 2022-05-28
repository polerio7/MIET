#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N,n;
    string s;
    cin>>N;
    for(int i=0;N!=1;i++){
        s.append(to_string(N%2));
        N/=2;
        
    }
    s.append(to_string(1));
    reverse(s.begin(),s.end());
    n=stoi(s);
    cout<<n<<endl;
    return 0;
}