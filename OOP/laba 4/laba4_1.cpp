#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> MegaFuncPr(string);
void Sort(vector<string>&);

int main(){
    vector<string> A;
    string B;

    getline(cin,B);
    A=MegaFuncPr(B);
    Sort(A);

    A.erase(A.begin());
    for(auto x:A) cout<<x<<' ';
    cout<<endl;
    
    return 0;
}

/*Насчёт функции Sort. В общем она сортирует вектор путем сравнивания каждого элемента с каждым
и соответственно перестанавливает его. Но дабы не подключать locale, при сравнении двух символов
если один из них строчный, то мы условно его переводим в прописной и просто запоминаем его индекс*/
void Sort(vector<string>& a){
    int b,d,Min;
    string c;
    for(int i=1;i<=stoi(a[0])-1;i++){
        Min=i;

        for(int j=i+1;j<=stoi(a[0]);j++){
            
            if(a[Min][0]>91) b=a[Min][0]-32;
            else b=a[Min][0];
            if(a[j][0]>91) d=a[j][0]-32;
            else d=a[j][0];
            
            if(b>=d) Min=j;  
            
        }

        c=a[i];
        a[i]=a[Min];
        a[Min]=c;

    }


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