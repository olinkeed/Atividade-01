#include <iostream>

void numerointeiro()
{
    int num;
    std::cin >> num;
    if (num % 2 == 0)
        std::cout << "Par";
    else
        std::cout << "Impar";
}

int main()
{

    numerointeiro();
    return 0;
}