#include <iostream>
using namespace std;

int main()
{
    //Bitwise and operator
    int and_result = 5 & 3; // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)
    std::cout << "5 & 3 : " << and_result << endl;

    //Bitwise OR operator
    int or_result = 5 | 3; //result will be 7 (0000 0101 | 0000 0011 = 0000 0111)
    std::cout << "5 | 3 :" << or_result << endl;

    //Bitwise XOR operator
    int XOR_result = 5 ^ 3; // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)
    std::cout << "5 ^ 3 :" << XOR_result << endl;

    //Bitwise NOT operator
    //The bitwise NOT operation (~) is a unary operation that takes a single number, and returns a new number where eagit ch bit is inverted (1 becomes 0, and 0 becomes 1).
    std::cout << "not 5 = (~5) : " << ~5 << endl;

    //Bitwise left-shift operator
    int left_shift_result = 5 << 1; // result will be 10 (0000 0101 << 1 = 0000 1010)
    std::cout << "5 << 1 : " << left_shift_result << endl;

    //Bitwise right-shift operator
    int right_shift_result = 5 >> 1; // result will be 2 (0000 0101) >> 1 = 0000 0010)
    std::cout << "5 >> 1 :" << right_shift_result << endl;
}