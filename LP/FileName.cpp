#include<iostream>
using namespace std;

class Fraction
{
private:
    int x;
    int y;

public:

    Fraction()
    {
        cout << "Constructor by default\n";
        x = 0;
        y = 0;
    }
    Fraction( int a, int b)
    {
        x = a;
        y = b;
        cout << "Constructor by 3 params\n";
    }

    void Print()
    {
        cout << " X: " << x << "\tY: " << y << endl;
    }
    void Init(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    
};
int main()
{
    Fraction a(15, -30);;
    a.Print();


    Fraction b( 10, 20);
    b.Print();


}