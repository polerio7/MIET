#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void EnsureEqual(const string&,const string&);

int main(){
    try {
        EnsureEqual("C++ White", "C++ White");
        EnsureEqual("C++ White", "C++ Yellow");
    }
    catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}

void EnsureEqual(const string& left,const string& right){
    std:: stringstream ss; 
    if (left!=right){

        ss<<left<<" != "<<right;
        throw runtime_error(ss.str());
    }
    else{
        cout<<"Vse rabotaet"<<endl; // Чтобы хоть как-то отобразить корректность работы кода без ошибок
    }
}