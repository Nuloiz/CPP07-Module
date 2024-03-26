#include "Array.hpp"

int main()
{
    Array<int> tab(5);
    for (unsigned int i = 0; i < 5; i++)
        tab[i] = i;
    for (unsigned int i = 0; i < 5; i++)
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