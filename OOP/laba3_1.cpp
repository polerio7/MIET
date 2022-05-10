#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

vector <string> MegaFuncPr(string);
int PreobStr(string);

int main(){
    vector<int> ludi;
    vector<string> com(2);
    string A;
    int Q;

    cin>>Q;
    cin.ignore();
    
    for(int i=0;i<Q;i++){
        A="";
        
        getline(cin,A);
        com=MegaFuncPr(A);
        
        switch(PreobStr(com[0])){
            case 1:{
            ludi[stoi(com[1])]=0;
            break;
}
            case 2:{
            ludi[stoi(com[1])]=1;
            break;
}
            case 3:{
            if(stoi(com[1])<0) for (int j=0;j<abs(stoi(com[1]));j++) ludi.pop_back();
            else for (int j=0;j<stoi(com[1]);j++) ludi.push_back(1);
            break;
}
            case 4:{
            int S=0;
            for(auto x : ludi){
                if(x==0)S++;

                
            }
            cout<<S<<endl;
            break;
}
            default:{}
           
        
        }

        

    }

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

int PreobStr(string A){
    if(A == "WORRY") return 1;
    else if (A=="QUIET") return 2;
    else if (A=="COME") return 3;
    else if (A=="WORRY_COUNT")return 4;
    else return 0;

}