
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        RPN a(av[1]);
        if (a.control())
            a.readRPN();
    }
    else
        cout << "Invalid argument" << endl;
}