

#include <iostream>
using namespace std;
class clsCalculator {

private :
    float _Num=0;
    float _OldNum=0;
    void Messages(string message) {

        cout << "Result After " << message<<" " << _OldNum << " is :";
    }
public:

   
    void Clear() {

        _Num = 0;
      
    }
    void Add(float Number) {
        _OldNum = Number;
        Messages("Adding");

        _Num += _OldNum;

    }
    void Subtract(float Number) {
        _OldNum = Number;
        Messages("Subtract");

        _Num -= _OldNum;

    }
    void Divide(float Number) {

        if (Number <= 0) {
            _OldNum = 1;
           

        }
        else {
            _OldNum = Number;

        }
        Messages("Divide");
        _Num /= _OldNum;

    }
    void Multiply(float Number) {
        _OldNum = Number;
        Messages("Multiplying");

        _Num *= _OldNum;

    }
    void PrintResult() {



        cout << _Num<<endl;

    }

};
int main()
{
    clsCalculator Calcul1;
    Calcul1.Clear();
    Calcul1.Add(10);
    Calcul1.PrintResult();

    Calcul1.Add(100);
    Calcul1.PrintResult();

    Calcul1.Subtract(20);
    Calcul1.PrintResult();

    Calcul1.Divide(0);
    Calcul1.PrintResult();
    Calcul1.Divide(2);
    Calcul1.PrintResult();

    Calcul1.Multiply(3);
    Calcul1.PrintResult();
}
