#include <iostream>

int potencia(int base, int expoente)
{
    int resultado = 1;
    do
    {
        std::cin >> base >> expoente;
    } while (base < 0 || expoente < 0);

    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

int main()
{
    int base, expoente;
    std::cout << potencia(base, expoente);
    return 0;
}