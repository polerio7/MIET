#include <iostream>

using namespace std;

struct Fraction{

    public: 
        explicit Fraction(const int& p_=0, const int& q_=1) //Конструктор с параметрами
        {
            p=p_/NOD(p_,q_);
            q=q_/NOD(p_,q_);
            }; 


        void Sum(const Fraction& right) { //Сумма
            int a,b;
            a=p*right.q+right.p*q;
            b=q*right.q;
            cout<<a/NOD(a,b)<<'/'<<b/NOD(a,b)<<endl;

        }; 

        void Subtraction(const Fraction& right){
            int a,b;
            a=p*right.q-right.p*q;
            b=q*right.q;
            if(a<0||b<0){a=abs(a); b=abs(b);cout<<'-'<<a/NOD(a,b)<<'/'<<b/NOD(a,b)<<endl;}
            else    cout<<a/NOD(a,b)<<'/'<<b/NOD(a,b)<<endl;


        };//Разность

        void Composition(const Fraction& right){
            int a,b;
            a=p*right.p;
            b=q*right.q;
            cout<<a/NOD(a,b)<<'/'<<b/NOD(a,b)<<endl;


        }; //Произведение

        void Print(){cout<<p<<'/'<<q<<endl;}; //Вывод значения

        int NOD(int n1,int n2){
            int div;
            if (n1 == n2)   // если числа равны, НОД найден
                return n1;
            int d = n1 - n2; // Находим разность чисел
            if (d < 0)       // если разность отрицательная,
            {
                d = -d;     // меняем знак
                div = NOD(n1, d); // вызываем функцию NOD() для двух наименьших чисел
            }
            else      // если разность n1-n2 положительная
            {
                div = NOD(n2, d); // вызываем функцию NOD() для двух наименьших чисел
            }
            return div;

        }; //Наибольший общий делитель

    private:
        int p = 0; //Числитель (Значение по умолчанию)
        int q = 1; //Знаменатель
};

int main(){
    //Создание переменных
    Fraction a(1, 2), b(3, 4);
    //Вывод значений
    a.Print();
    b.Print();
    //Суммирование
    a.Sum(b);
    //Разность
    a.Subtraction(b);
    //Произведение
    a.Composition(b);
    return 0;
}