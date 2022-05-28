#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> MegaFuncPr(string);

int main(){
    int S=0,s=0;
    string A;
    vector<string> B,C;

    getline(cin,A);
    B=MegaFuncPr(A);

    B.erase(B.begin());
    sort(B.begin(),B.end());
    for(auto x:B){
        S+=stoi(x);
    }

    A="";
    int f=0;
    for(auto x:B){
        
        if((s>=((S*2)/3))&&(f==1)){
            s=0;
            C.push_back(A);
            A="";
            f++;
        }
        if((s>=(S/3))&&(f==0)){
            s=0;
            C.push_back(A);
            A="";
            f++;
        }

        s+=stoi(x);
        A+=x+' ';
        
    }
        
        C.push_back(A);
        for(auto x:C){
            cout<<x<<' ';
            cout<<endl;
        }
        cout<<endl;
    return 0;
}

vector<string> MegaFuncPr(string a){
    vector<string> b;
    string word="";

    for (auto x : a){
        if(x==' '){
            b.push_back(word);
            word="";
        }
        else word+=x;

    }
b.push_back(word);
return b;
}