
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> MegaFuncPr(string);
int SwMFPR(string);

struct Student{
    public:
    Student(){
        Name=""; SecondName=""; date=""; month=""; year="";

    }
    explicit Student(const string& c){
        vector<string> A=MegaFuncPr(c);
        Name=A[0]; SecondName=A[1]; date=A[2]; month=A[3]; year=A[4];
        
        };
    
    void SetInfo(const vector<string>& A){
        Name=A[0];
        SecondName=A[1];
        date=A[2]; 
        month=A[3]; 
        year=A[4];
    };
    void GetName(){
        for(auto x:Name)
        cout<<x;
        cout<<' ';
        for(auto x:SecondName)
        cout<<x;
        cout<<endl;
    };
    void GetDate(){
        for(auto x:date)
        cout<<x;
        cout<<'.';
        for(auto x:month)
        cout<<x;
        cout<<'.';
        for(auto x:year)
        cout<<x;
        cout<<endl;

    };
    private:
    string Name,SecondName;
    string date,month,year;

};

int main(){
    int N;
    string B;
    vector<Student> Stud;
    cin>>N;
    cin.ignore(1);
    for(int i=0;i<N;i++){
        getline(cin,B); 
        Stud.push_back(Student(B));
        B="";
    }
    cin>>N;
    cin.ignore(1);
    for(int i=0;i<N;i++){
        getline(cin,B);
        switch(SwMFPR(B)){
            case 1: Stud[stoi(MegaFuncPr(B)[1])-1].GetDate(); break;
            case 2: Stud[stoi(MegaFuncPr(B)[1])-1].GetName(); break;
            default: cout<<"bad request"<<endl;

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

int SwMFPR(string B){
    vector<string> a=MegaFuncPr(B);
    if(a[0]=="date") {return 1;}
    else if(a[0]=="name") {return 2;}
    else {return 0;}

}