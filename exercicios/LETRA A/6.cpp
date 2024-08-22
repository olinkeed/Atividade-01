#include <iostream>

void potencia()
{
    int base, expoente, resultado = 1;
    do
    {
        std::cin >> base >> expoente;
    } while (base < 0 || expoente < 0);

    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
        std::cout << resultado << std::endl;
    }
}

int main()
{
    potencia();
    return 0;
}