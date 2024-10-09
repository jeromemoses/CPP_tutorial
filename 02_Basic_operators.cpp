#include <iostream>

using namespace std;

int main()
{
    //operators examples

    //Arithmatic operator

    //addition
    int a = 13;
    int b = 14;
    std::cout << "a+b: " << a+b << endl;

    //Subtraction
    a = 13;
    b = 14;
    std::cout << "a-b: " << a-b << endl;

    //Multiplication
    a = 13;
    b = 14;
    std::cout << "axb: " << a*b << endl;


    //Division
    a = 13;
    b = 14;
    std::cout << "a/b: " << a/b << endl;

    //Modulus
    int x = 21;
    int y = 7;
    std::cout << "X % Y: "<< x%y << endl;

    //relational operator

    /*
    Equal to
    1 == 1 -> true
    7 == 77 -> false

    Not equal to
    12 != 20 -> true
    13 != 13 -> false

    Greater than
    777 > 7 -> true
    45 > 5 -> false

    Less than
    3 < 2 -> true
    7 < 1 -> false

    Greater than or equal
    34 >= 32 -> true
    87 >= 87 -> true
    34 >= 75 -> false

    less than or equal
    32 <= 43 -> true
    23 <= 30 -> true
    54 <= 54 -> true
    47 <= 83 -> false
    */

   //Logical operator

    int z = 5;
    int t = 7;

    //AND operator &&
    if((z<=t) &&  (z!=t))
    {
        std::cout << "AND operation passed" << endl;
    }

    //OR operator ||
    if ((z==5) || (z>5))
    {
        std::cout << "OR operation passed" << endl;
    }

    //Not ! operator
    if (!(z>=t))
    {
        std::cout << "Not operator passed" << endl;
    }
}