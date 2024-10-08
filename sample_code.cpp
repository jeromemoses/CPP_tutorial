#include <iostream>
using namespace std;

//simple function to add the arguement parameters
int add (int a, int b)
{
    return a+b;
}

class calculator
{
public:
    //A member function to multiply the given two inputs
    int multiply(int a, int b)
    {
        return a*b;
    }
};

int main()
{
    int x = 5;
    int y = 7;

    int sum = add(x , y);
    std::cout << "the sum of x and y:" << sum << endl;

    calculator c;

    int product = c.multiply(x, y);
    std::cout << "Product for x and y:" <<product << endl;

}