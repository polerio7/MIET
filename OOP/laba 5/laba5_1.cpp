#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> MegaFuncPr(string,char);

struct IP{
    public:

    explicit IP (const string& ip_){
            vector<string> a=MegaFuncPr(ip_,'.');
            for(auto x:a){ if (stoi(x)>=0&&stoi(x)<=255)ip.push_back(stoi(x));
            else {ip={0,0,0,0};break;};
            }
            Print();
        };

    private:
        void Print(){for(auto x:ip) cout<<x<<' '; cout<<endl;};
        vector<int> ip;

};

int main(){
    string c;
    getline(cin,c);
    IP a(c);
    return 0;
}

vector<string> MegaFuncPr(string a,char c='.'){
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