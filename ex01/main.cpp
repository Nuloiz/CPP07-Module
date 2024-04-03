#include "iter.hpp"

void printi(int &i) {
    std::cout << i << std::endl;
}

void prints(std::string &str) {
    std::cout << str << std::endl;
}

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    iter(tab, 6, printi);
    std::string tab2[] = { "Hello", "World", "!" };
    iter(tab2, 3, prints);
    return 0;
}