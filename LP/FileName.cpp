#include<iostream>
using namespace std;

class Fraction
{
private:
    int x; 
    int y;
    char s; 

public:

    Fraction() 
    {
        cout << "Constructor by default\n";
        x = 0;
        y = 0;
        s = 'A';
    }
    Fraction(char z, int a, int b) 
    {
        s = z;
        x = a;
        y = b;
        cout << "Constructor by 3 params\n";
    }

    void Print() 
    {
        cout << s << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) 
    {
        s = t;
        x = _x;
        y = _y;
    }
    void SetSymbol(char syn)
    {
        s = syn;
    }
    char GetSymbol()
    {
        return s;
    }
};
int main()
{
    Fraction a;
    a.Print();
    a.Init('A', 10, -20);
    a.Print();

    Fraction b('B', 10, 20);
    b.Print();


}