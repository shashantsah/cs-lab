#include <iostream>
using namespace std;
class tollbooth
{
    int a, b;
public:
    tollbooth()
    {
    a = 0;
    b = 0;
    }
    tollbooth(int a, int b)
    {
    a = a;
    b = b;
    }
    void payingCar()
    {
        a++;
        b = b + 50;
    }
    void nopayCar()
    {
    a++;
    }
    void display()
    {
        cout << " Total number of cars = " << a << endl;
        cout << "Total amount of money = " << b << endl;
    }
};
int main()
{
    tollbooth obj;
    while (true)
    {
        cout << "Press 1 to add nonpaying car" << endl;
        cout << "Press 2 to add paying car" << endl;
        cout << "Press 0 to display and exit" << endl;
        int input;
        cin >> input;
        if (input == 0)
        {
            obj.display();
            break;
        }
        if (input == 1)
        {
            obj.nopayCar();
        }
        if (input == 2)
        {
            obj.payingCar();
        }
 
 }
 return 0;
}