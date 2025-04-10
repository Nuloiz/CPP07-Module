#include "Array.hpp"

int main()
{
    Array<int> tab(5);
    for (int i = 0; i < 5; i++)
        tab[i] = i;
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << std::endl;
    try
    {
        tab[3] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << std::endl;
    try
    {
        tab[5] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }
    return 0;
}