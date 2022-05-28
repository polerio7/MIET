#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

float avg(vector<int>);
vector<int> avgv(vector<int>,float);

int main(){
    int N;
    int b;
    vector <int> a,C;

    cin>>N;
    for(int i=0;i<N;i++){
    cin>>b;
    a.push_back(b);
    }
    
    C=avgv(a,avg(a));
    for (int i=0;i<C.size();i++)
    cout<<C[i]<<' ';

    return 0;
}

float avg(vector<int> a){
    float S;
    for(int i=0;i<a.size();i++) S+=a[i];
    return S/a.size();
}

vector<int> avgv(vector<int> a, float avg){
    vector<int> b;
    for(int i=0;i<a.size();i++){
        if(a[i]>avg) b.push_back(i);
    }
    return b;
}