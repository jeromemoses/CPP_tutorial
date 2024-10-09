#include <iostream>
using namespace std;

//function prototyping declaration
int add(int x, int y);

int main()
{
     /*
     * Functions in C++
     * -----------------
     * A function is a group of statements that perform a specific task, 
     * organized as a separate unit in a program.
     * 
     * Functions help break the code into smaller, manageable, and reusable blocks.
     * 
     * There are two main types of functions in C++:
     * 
     * 1. Standard Library Functions:
     *    These are pre-defined functions available in the C++ standard library.
     *    Examples include:
     *      - sort()    : Used to sort elements
     *      - strlen()  : Returns the length of a string
     *      - sqrt()    : Computes the square root of a number
     * 
     *    To use these functions, you must include the appropriate header file.
     *    For example, to use sqrt(), you include <cmath>.
     * 
     * 2. User-Defined Functions:
     *    These functions are created by the programmer to perform specific tasks.
     *    To create a user-defined function:
     *    - Define the function with a return type and parameters.
     *    - Call the function in your code where you need it.
     */
    int a = 7;
    int b = 70;

    std::cout << "sum of a and b returned by function: " << add(a,b) << endl;
}

//user defined function
//function definition
int add(int x, int y)
{
    return x+y;
}