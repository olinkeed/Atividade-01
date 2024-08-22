#include <iostream>

std::string numerointeiro(int num)
{
    std::cin >> num;
    if (num % 2 == 0)
        return "Par";
    else
        return "Impar";
}

int main()
{
    int numero;
    std::cout<<numerointeiro(numero);
    return 0;
}