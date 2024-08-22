#include <iostream>

unsigned long long fatoria(unsigned int valor)
{
    unsigned long long fatorial = 1;
    for (unsigned int i = 1; i <= valor; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}

int main()
{
    unsigned int a;
    std::cin >> a;
    std::cout << fatoria(a) << std::endl;
    return 0;
}