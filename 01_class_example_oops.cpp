#include <iostream>

using namespace std;

class monitor
{
public:
    int print_hi()
    {
        std::cout << "Hi from class function (^_^) \r\n" << endl;
    }
};

int main()
{
    monitor hi;
    hi.print_hi();
}