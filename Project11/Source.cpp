#include <iostream>
using namespace std;

class Circle
{
protected:
    double diameter;
public:
    Circle()
    {
        diameter = 0;
    }
    Circle(double a)
    {
        diameter = a;
    }
    void Show()
    {
        cout << "Diametr kruga  " << diameter << endl;
    }
};

class Square
{
protected:
    double size;
public:
    Square()
    {
        size = 0;
    }
    Square(double a)
    {
        size = a;
    }
    void Show()
    {
        cout << "Razmer kvadrata " << size << endl;
    }
};

class CircleInSquare : public Circle, public Square
{
public:
    CircleInSquare(double d, double s)
    {
        diameter = d;
        size = s;
    }
    bool Check()
    {
        bool temp;

        if (size > diameter)
        {
            temp = true;
        }
        else
        {
            temp = false;
        }
    return temp;
    }
    void ShowCS()
    {
        Circle::Show();
        Square::Show();
        if (Check())
        {
            cout << "Krug vpisan v kvadrat\n";
        }
        else {
            cout << "Krug  ne vpisan v kvadrat\n";
        }
    }
};

int main()
{
    CircleInSquare obj(4, 9);
    obj.ShowCS();
}