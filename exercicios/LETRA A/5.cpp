#include <iostream>

void fatoria()
{
    unsigned int valor;
    std::cin >> valor;

    unsigned long long fatorial = 1;
    for (unsigned int i = 1; i <= valor; i++)
    {
        fatorial *= i;
        std::cout << fatorial << std::endl;
    }
}

int main()
{
    fatoria();
    return 0;
}