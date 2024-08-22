#include <iostream>

void anobissexto()
{
    int ano;
    std::cin >> ano;
    if (ano % 4 == 0 && ano % 4 != 0)
        std::cout << "ANO Bissexto" << std::endl;
    else if (ano % 400 == 0)
        std::cout << " ANO Bissexto" << std::endl;
}
int main()
{
    anobissexto();
    return 0;
}