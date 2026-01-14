

#include <iostream>
using namespace std;
class clsCalculator
{

private:
    float _LastNum = 0;
    float _Result = 0;
    float _OldResult = 0;
    string _Nameoperaror = "Clear";

    bool _IsZero(float Num)
    {

        return (Num == 0);
    }

public:
    void Clear()
    {
        _LastNum = 0;
        _Result = 0;
        _OldResult = 0;
        _Nameoperaror = "Clear";
    }
    void Add(float Number)
    {
        _LastNum = Number;
        _OldResult = _Result;
        _Nameoperaror = "Adding";
        _Result += Number;
    }

    void Subtract(float Number)
    {
        _LastNum = Number;
        _OldResult = _Result;
        _Nameoperaror = "Subtracing";
        _Result -= Number;
    }

    void Divide(float Number)
    {
        if (_IsZero(Number))
        {

            Number = 1;
        }
        _LastNum = Number;
        _OldResult = _Result;
        _Nameoperaror = "Dividing";
        _Result /= Number;
    }
    void Multiply(float Number)
    {
        _LastNum = Number;
        _Nameoperaror = "Maltiplying";
        _OldResult = _Result;
        _Result *= Number;
    }
    void CancelOperation()
    {
        _LastNum = 0;
        _Nameoperaror = "CancelOperation";
        _Result = _OldResult;
    }
    void PrintResult()
    {

        cout << "Result After " << _Nameoperaror << " " << _LastNum << " is :" << _Result << endl;
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
    Calcul1.CancelOperation();
    Calcul1.PrintResult();
}
