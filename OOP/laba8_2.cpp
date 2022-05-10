#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;
// В общем я так и не нашёл реализацию класса Rational, поэтому напишу свой
class Rational{ 
    public:
  explicit  Rational(const int& num=0,const int& denom=1){
      if(denom==0){
        throw std:: invalid_argument("Denominator must not be 0.");

      }
    Numerator=num;
    Denominator=denom;
  };

    friend Rational operator/(const Rational& lhs, const Rational& rhs);

    private:
    int Numerator;
    int Denominator;
};

    Rational operator/(const Rational& lhs, const Rational& rhs){
        if((lhs.Denominator*rhs.Numerator)==0){
            throw std::domain_error("Nelzya delit na nol");
        }
        return Rational(lhs.Numerator*rhs.Denominator,lhs.Denominator*rhs.Numerator);
    }

int main(){

    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    }
    catch (invalid_argument& e) {
        cout<<e.what()<<endl;
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    }

    catch (domain_error& e) {
        cout<<e.what()<<endl;
    }
    cout << "OK" << endl;


    return 0;
}