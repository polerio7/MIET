#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

vector <string> MegaFuncPr(string);

int main(){
string A;
getline(cin,A);

for(int i=0;i<MegaFuncPr(A).size();i++)
cout<<MegaFuncPr(A)[i]<<endl;

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