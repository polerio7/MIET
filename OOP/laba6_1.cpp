#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> MegaFuncPr(string,char);

int main(){
    int N,M;
    string B;
    string F="file.txt";
    ifstream inp(F);
    vector<string> a,b;

    getline(inp,B,' ');
    N=stoi(B); B="";
    getline(inp,B);
    M=stoi(B); B="";

    while(getline(inp,B)){
        b=MegaFuncPr(B,',');
        for(auto x:b) a.push_back(x);
        B="";
    }
    int i=0;
    for(auto x:a){
        if(i==M-1) {cout<<x<<endl; i=0;}
        else {cout<<x<<' '; i+=1;} 
        
     }

    return 0;
}

vector<string> MegaFuncPr(string a,char c=' '){
    vector<string> b;
    string word="";

    for (auto x : a){
        if(x==c){
            b.push_back(word);
            word="";
        }
        else word+=x;

    }
b.push_back(word);
return b;
}