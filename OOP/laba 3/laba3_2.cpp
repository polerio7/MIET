#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> MegaFuncPr(string);
int PreobStr(string);

int main(){
int Q;
vector<string> B(3);
vector<string> C;
string A;

cin>>Q;
cin.ignore();

for(int i=0;i<Q;i++){
    A=""; 
    getline(cin,A);
    B=MegaFuncPr(A);

    switch(PreobStr(B[0])){
        case 1:{
            C.push_back(B[1]+' '+B[2]);
            break;
        }
        case 2:{
            int S=0;
            for(auto x : C){
                if(B[1]==MegaFuncPr(x)[0]||B[1]==MegaFuncPr(x)[1])S++;
            }
            cout<<S<<endl;
            break;
        }
        case 3:{
            int flag=0;
            for(auto x : C){
                
                if( (x == B[1]+' '+B[2]) || (x == B[2]+' '+B[1]) ){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }

            }
            if(flag==0) cout<<"NO"<<endl;
            break;
        }

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
    if(A == "ADD") return 1;
    else if (A=="COUNT") return 2;
    else if (A=="CHECK") return 3;
    else return 0;

}