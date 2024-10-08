#include <iostream>
using namespace std;

int main()
{
    int i;

    //for loop
    for (i = 0; i <= 77;i++)
    {
        std::cout << "i on for loop function: " << i << endl;
    }
    i -= 1;

    //while loop
    while(i>=1)
    {
        std::cout << "i on while loop function: " << i-- << endl;
    }

    //do while loop
    do
    {
        std::cout << "i on do while loop function: " << i++ << endl;
    } while (i <= 77);
    
}